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

std::map<std::string, double> DataBase;
std::string _date;
double _value;

int leap_year(std::string year, std::string month, std::string day)
{
    if (month == "09" || month == "04" || month == "06" || month == "10")
    {
        if (atoi(day.c_str()) > 30)
            return 0;
    }
    if (month == "02")
    {
        if (atoi(year.c_str()) % 4 == 0)
        {
            if (atoi(year.c_str()) % 100 != 0) //is leap
            {
                if (atoi(day.c_str()) > 29)
                    return 0;
            }
            else if (atoi(year.c_str()) % 100 == 0)
            {
                if (atoi(year.c_str()) % 400 == 0) //is leap
                {
                    if (atoi(day.c_str()) > 29)
                        return 0;
                }
                else if (atoi(year.c_str()) % 400 != 0) //not leap
                {
                    if (atoi(day.c_str()) > 28)
                        return 0;
                }
            }
        }
        else //not leap
        {
            if (atoi(day.c_str()) > 28)
                return 0;
        }
    }
    return 1;
}

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

    if (!leap_year(year, month, day))
    {
        std::cout << "Error: invalid date => ";
        return 0;
    }
    return 1;
}

int    check_value(std::string value, std::string line)
{
    ////////////////check_float////////////////
    char *tmp;
    if (value[0] == '.'){
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    if (!strtof(value.c_str(), &tmp) && tmp == value)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }

    if (*tmp){        
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    tmp--;
    if (*tmp == '.')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    ////////////////////////////////////////
    if (value[0] && value[0] == '-')
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 0;
    }   
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
        if (line[pos+1] && line[pos+1] != '|')
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
        int pos2 = line.find(' ', pos+1);
        if (pos2 - pos != 2)
        {
            std::cout << "Error: bad input => " << line << std::endl;
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
    std::map<std::string, double>::iterator end = DataBase.end();
    std::map<std::string, double>::iterator it = DataBase.find(_date);

    if (_date < (DataBase.begin())->first)
        std::cout << "Error: bad input => " << _date << std::endl;

    else if (_date > (--DataBase.end())->first)
        std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(3) << _value * (--DataBase.end())->second << std::endl;
    else if (it == end)
    {
        for (std::map<std::string, double>::iterator map = DataBase.begin(); map != end; map++)
        {
            if (_date <= map->first)
            {
                std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(3) << _value * (--map)->second << std::endl;
                break;
            }
        }
    }
    else
        std::cout << _date << " => " << _value << " = " << std::fixed << std::setprecision(3) << _value * it->second << std::endl; 
}