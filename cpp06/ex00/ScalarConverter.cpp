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
	std::cout << "is int\n";
	return (1);
}

int	check_double(const char *check)
{
	char	*buff;
	
	strtod(check, &buff);
	if (*buff)
		return (0);
	std::cout << "is double\n";
	return (1);
}

int	check_float(const char *check)
{
	char *buff;
	
	strtof(check, &buff);
	if (*buff != 'f' && *buff) //nop hihi
	{
		std::cout << "------------" << *buff << std::endl;
		return (0);
	}
	std::cout << "is float\n";
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

void	convert_int(const char *input)   // [check int min for isprint() in linux]
{
	long long tmp = atoll(input);
    ///////////////////////////////////////////////////////////////////
	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
    ///////////////////////////////////////////////////////////////////
	if (tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << tmp << std::endl;
    ///////////////////////////////////////////////////////////////////
	std::cout << "float : " << static_cast<float>(tmp) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(tmp) << ".0" << std::endl;
}

void	convert_double(const char* input)
{	
	double tmp = atof(input);
	std::cout << "============" << tmp << std::endl;

    ///////////////////////////////////////////////////////////////////
	if (tmp >= 127 || !isprint(tmp))
		std::cout << "char: Non Displayable" << std::endl;
	else
		std::cout << "char: '" << (unsigned char) tmp << "'" << std::endl;
    ///////////////////////////////////////////////////////////////////
	if (tmp < INT_MIN || tmp > INT_MAX || isnan(tmp))
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
    ///////////////////////////////////////////////////////////////////

		std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << "double : " << tmp << std::endl;
}

void	convert_float(const char* input)
{
	(void) input;
	float tmp = atof(input);
			std::cout << "int : " << static_cast<int>(tmp) << std::endl;
    ///////////////////////////////////////////////////////////////////

		std::cout << "float : " << tmp << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(tmp) << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (check_char(input.c_str()))
		convert_char(input);

	else if (check_int(input.c_str()))
		convert_int(input.c_str());
	
	else if (check_double(input.c_str()))
		convert_double(input.c_str());
		
	else if (check_float(input.c_str()))
		convert_float(input.c_str());

	else
		std::cout << "other\n";

}
