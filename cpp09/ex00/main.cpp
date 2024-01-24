/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:17:56 by meharit           #+#    #+#             */
/*   Updated: 2024/01/22 21:54:04 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//2020-02-02 , 0.5

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
        std::cout << "Error: could not open file." << std::endl;
}