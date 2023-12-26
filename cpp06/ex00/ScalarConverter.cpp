/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:13:30 by meharit           #+#    #+#             */
/*   Updated: 2023/12/26 17:36:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//////////canonical form/////////////////////
ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& og){(void)og;}
ScalarConverter ScalarConverter::operator=(const ScalarConverter& og)
{
	(void)og;
	return (*this);
}
ScalarConverter::~ScalarConverter(){}
//////////////////////////////////////////////

void	convert_char(std::string input)
{
	std::cout << "char : '" << input[0] << "'" << std::endl;
	std::cout << "int : " << (int) input[0] << std::endl;
	std::cout << "float : " << (int) input[0] << ".0f" << std::endl;
	std::cout << "double : " << (int) input[0] << ".0" << std::endl;
	exit(0);
}

void	convert_int(const char *input)
{
	long long tmp = atoll(input);
	
	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
    
	if (tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
    
	std::cout << "float : " << static_cast<float>(tmp) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(tmp) << ".0" << std::endl;
}

void	convert_double(const char* input)
{	
	double tmp = atof(input);

	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
    
	if (tmp < INT_MIN || tmp > INT_MAX || isnan(tmp))
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
    
	std::cout << "float : " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double : " << tmp << std::endl;
}

void	convert_float(const char* input)
{

	float tmp = strtof(input, NULL);

	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char : '" << (unsigned char) tmp << "'" << std::endl;
    
	if ((double)tmp < INT_MIN || (double)tmp > INT_MAX || isnan(tmp))
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
    
	std::cout << "float : " << tmp << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(tmp) << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (additional_check(input))
	{
		std::cout << "Can't convert" << std::endl;
		exit(1);
	}

	if (check_char(input.c_str()))
		convert_char(input);

	else if (check_int(input.c_str()))
		convert_int(input.c_str());
	
	else if (check_double(input.c_str()))
		convert_double(input.c_str());
		
	else if (check_float(input))
		convert_float(input.c_str());

	else
		std::cout << "Can't convert!" << std::endl;
}
