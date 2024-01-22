/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:01 by meharit           #+#    #+#             */
/*   Updated: 2024/01/22 21:51:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> DataBase;
std::string _date;
double _value;

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
    if (value[0] == '.'){
        std::cout << "*Error: bad input => " << line << std::endl;
        return 0;
    }
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
    double val = atof(value.c_str());
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
        // std::cout << "pos1 " << pos << " pos2 " << line.find(' ', pos+1) << std::endl;
        int pos2 = line.find(' ', pos+1);
        if (pos2 - pos != 2)
        {
            std::cout << "+Error: bad input => " << line << std::endl;
            return 0;   
        }
        std::string value = line.substr(pos2 + 1);
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
                std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(2) << _value * (--beg)->second << std::endl;
                break;
            }
        }
    }
    else
        std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(2) << _value * it->second << std::endl; 
}