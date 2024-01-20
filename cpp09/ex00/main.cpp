/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:17:56 by meharit           #+#    #+#             */
/*   Updated: 2024/01/19 22:38:53 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// is 0 valid

int    check_date(std::string date)
{
    struct tm tm;

    if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
        std::cout << "Date isn't valid" << std::endl;
        return 0;
    }
    
    int pos = date.find('-', 0);
    std::string year = date.substr(0, pos);
    if (atoi(year.c_str()) == 0){
        std::cout << "Date isn't valid" << std::endl;
        return 0;
    }
    _date = year + "-";
    std::string tmp = date.substr(date.find('-', pos) + 1);
    std::string month;
    for (int i = 0; tmp[i] != '-'; i++)
    {
        month += tmp[i];
    }
    if (month.length() == 1)
        month = '0' + month;
    _date += month;
    std::string day = date.substr(date.find('-', pos + 1) + 1);
    if (atoi(day.c_str()) > 31)
    {
        std::cout << "Date isn't valid" << std::endl;
        return 0;
    }
    if (day.length() == 1)
        day = '0' + day;
    _date = _date + '-' + day;
    return 1;
}

void    check_value(std::string value)
{
    ////////////////check_float////////////////
    char *tmp;
    if (!strtof(value.c_str(), &tmp))
    {
        std::cout << "Error: Value is invalid1" << std::endl;
        return;
    }
    if (*tmp){
        std::cout << "Error: Value is invalid2" << std::endl;
        return ;
    }
    tmp--;
    if (*tmp == '.')
    {
        std::cout << "Error: Value is invalid3" << std::endl;
        return;
    }
    ////////////////////////////////////////
    float val = atof(value.c_str());
    if (val > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return;
    }
    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return ;
    }
    _value = val;
}

int    check_line(std::string line, int &dv_count) //no value || no date
{
    if (line == "date | value")
    {
        if (dv_count == 1)
            std::cout << "Error: The Data file's layout is invalid" << std::endl;
        dv_count++;
        return 0;
    }
    if (!line.empty())
    {
        /////////////date/////////////
        int pos = line.find(' ', 0);
        if (pos > 10)
        {
            std::cout << "Error: Date isn't valid" << std::endl;  
            return 0;
        }
        std::string date = line.substr(0, pos);
        if (!check_date(date))
            return 0;
        /////////////value/////////////
        std::string value = line.substr(line.find(' ', pos+1) + 1);
        check_value(value);
        return 1;
    }
    return 0;
}

void    bitcoin()
{
    std::map<std::string, float>::iterator end = DataBase.end();
    std::map<std::string, float>::iterator it = DataBase.find(_date);
    if (it == end)
        std::cout << "opsie" << std::endl;
    else
        std::cout << _date << " => " << _value << " = " << _value * it->second << std::endl; 
}

void    open_to_eval(char *to_eval)
{
    std::ifstream ifs;
    
    ifs.open(to_eval, std::ifstream::in);
    if (!ifs)
    {
        perror("Data Base to evaluate");
        throw "Error while trying to open the data file to evaluate";
    }
    
    //read line by line and evaluate it with DB-map
    
    std::string buff;
    int dv_count = 0;
    
    std::getline(ifs, buff, '\n');
    if (ifs.eof())
        throw "The Data file is empty";
    else if (!buff.empty() && buff != "date | value")
        throw "The Data file's layout is invalid";

    while (!ifs.eof())
    {
        std::getline(ifs, buff, '\n');
        if (check_line(buff, dv_count))
            bitcoin();
    }
}

void    get_DB()
{
    std::ifstream db;
    
    db.open("./data.csv", std::ifstream::in);
    if (!db)
    {
        perror("The DataBase");
        throw "Error while trying to open The Data Base file";
    }
    ///////////////////////////////////////////////////////////
    std::string key;
    std::string tmp_value;
    
    std::getline(db, key, '\n');
    if (key.empty())
        throw "The Data Base is empty";
    
    while (!db.eof())
    {
        std::getline(db, key, ',');
        if (!key.empty()) //new line
        {
            std::getline(db, tmp_value, '\n');        
            DataBase[key] = std::strtof(tmp_value.c_str(), NULL);
        }        
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            get_DB();
            open_to_eval(argv[1]);
        }
        catch(const char *exception)
        {
            std::cout << exception << std::endl;        
        }
    }
    else
    {
        std::cout << "Error: could not open file." << std::endl;
    }
}