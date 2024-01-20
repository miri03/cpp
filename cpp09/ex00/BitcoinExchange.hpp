/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:04 by meharit           #+#    #+#             */
/*   Updated: 2024/01/19 21:46:16 by meharit          ###   ########.fr       */
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

#include <map>

std::map<std::string, float> DataBase;
std::string _date;
float _value;