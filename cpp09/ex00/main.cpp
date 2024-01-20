/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:17:56 by meharit           #+#    #+#             */
/*   Updated: 2024/01/20 23:04:39 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int    check_date(std::string date)
{
    struct tm tm;

    if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
        std::cout << "Error: bad input => ";
        return 0;
    }
    /////////////////year//////////////////
    int pos = date.find('-', 0);
    std::string year = date.substr(0, pos);
    if (atoi(year.c_str()) == 0){
        std::cout << "Error: bad input => ";
        return 0;
    }
    _date = year + "-";
    /////////////////month//////////////////
    std::string tmp = date.substr(date.find('-', pos) + 1);
    std::string month;
    for (int i = 0; tmp[i] != '-'; i++)
    {
        month += tmp[i];
    }
    if (month.length() == 1)
        month = '0' + month;
    _date += month;
    /////////////////day//////////////////
    std::string day = date.substr(date.find('-', pos + 1) + 1);
    if (atoi(day.c_str()) > 31)
    {
        std::cout << "Error: bad input => ";
        return 0;
    }
    if (day.length() == 1)
        day = '0' + day;
    _date = _date + '-' + day;
    return 1;
}

int    check_value(std::string value, std::string line)
{
    ////////////////check_float////////////////
    char *tmp;
    if (!strtof(value.c_str(), &tmp) && tmp == value)
    {
        std::cout << "*Error: bad input => " << line << std::endl;
        return 0;
    }

    if (*tmp){        
        std::cout << "!Error: bad input => " << line << std::endl;
        return 0;
    }
    tmp--;
    if (*tmp == '.')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    ////////////////////////////////////////
    float val = atof(value.c_str());
    if (val > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 0;
    }
    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }
    _value = val;
    return 1;
}

int    check_line(std::string line)
{
    if (!line.empty())
    {
        /////////////date/////////////
        int pos = line.find(' ', 0);
        if (pos > 10)
        {
            std::cout << "Error: bad input => " << line << std::endl;  
            return 0;
        }
        std::string date = line.substr(0, pos);
        if (!check_date(date))
        {
            std::cout << line << std::endl;
            return 0;
        }
        /////////////value/////////////
        std::string value = line.substr(line.find(' ', pos+1) + 1);
        if (!check_value(value, line))
            return 0;
        return 1;
    }
    return 0;
}

void    bitcoin()
{
    std::map<std::string, float>::iterator end = DataBase.end();
    std::map<std::string, float>::iterator it = DataBase.find(_date);
    if ((DataBase.begin())->first >= _date)
        std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(2) << _value * (DataBase.begin())->second << std::endl;   
    else if (it == end)
    {
        for (std::map<std::string, float>::iterator beg = DataBase.begin(); beg != end; beg++)
        {
            if (beg->first >= _date)
            {
                std::cout << "res " << beg->first << " | " << (beg--)->first << std::endl;
                std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(2) << _value * (beg--)->second << std::endl;
                break;
            }
        }
    }
    else
        std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(2) << _value * it->second << std::endl; 
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
    std::getline(ifs, buff, '\n');
    if (ifs.eof())
        throw "The Data file is empty";
    if (buff != "date | value")
        throw "Error: First line should be \"date | value\"";
    while (!ifs.eof())
    {
        std::getline(ifs, buff, '\n');
        if (check_line(buff))
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