/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:04 by meharit           #+#    #+#             */
/*   Updated: 2024/01/20 20:51:49 by meharit          ###   ########.fr       */
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

std::map<std::string, float> DataBase;
std::string _date;
float _value;