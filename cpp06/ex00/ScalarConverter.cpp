/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:13:30 by meharit           #+#    #+#             */
/*   Updated: 2023/12/03 21:29:41 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	check_char(const char *check)
{
	if (strlen(check) == 1 && (isprint(check[0]) && !isdigit(check[0])))
		return (1);
	return (0);
}

int	check_int(const char *check)
{
	char *buff;
	strtol(check, &buff, 10);
	if (*buff)
		return (0);
	return (1);
}

// void	check_float(const char *check)
// {
	
// }

int	check_double(const char *check)
{
	char	*buff;
	
	strtod(check, &buff);
	std::cout << "------------" << *buff << std::endl;
	if (*buff)
		return (0);
	return (1);
}

void	convert_char(std::string input)
{
	std::cout << "char : '" << input[0] << "'" << std::endl;
	std::cout << "int : " << (int) input[0] << std::endl;
	std::cout << "float : " << (int) input[0] << ".0f" << std::endl;
	std::cout << "double : " << (int) input[0] << ".0" << std::endl;
	exit(0);
}

void	convert_int(const char *input) //check int min for isprint()
{
	long long tmp = atoll(input);
///////////////////////////////////////////////////////////////////////
	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
///////////////////////////////////////////////////////////////////////
	if (tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << tmp << std::endl;
///////////////////////////////////////////////////////////////////////
	std::cout << "float : " << static_cast<float>(tmp) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(tmp) << ".0" << std::endl;
}

void	convert_double(const char* input) //4.0
{	
	double tmp = atof(input);
///////////////////////////////////////////////////////////////////////
	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
///////////////////////////////////////////////////////////////////////
	if (tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
///////////////////////////////////////////////////////////////////////
	std::cout << "float : " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double : " << tmp << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (check_char(input.c_str()))
		convert_char(input);

	if (check_int(input.c_str()))
		convert_int(input.c_str());
	
	if (check_double(input.c_str()))
		convert_double(input.c_str());
		
	// if (check_int(input.c_str()))
	// 	convert_int(input.c_str());
	// else
	// 	std::cout << "other\n";

}
