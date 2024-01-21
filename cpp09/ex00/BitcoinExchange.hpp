/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:04 by meharit           #+#    #+#             */
/*   Updated: 2024/01/21 14:08:11 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <exception>
# include <iostream>
# include <fstream>

# include <stdlib.h>
#include <ctime> //strptime
#include <unistd.h> //strtof
#include <cstdlib> //atoi
#include <iomanip> // setprecision

#include <map>

extern std::map<std::string, float> DataBase;
extern std::string _date;
extern float _value;

int     check_date(std::string date);
int     check_value(std::string value, std::string line);
int     check_line(std::string line);
void    bitcoin();