/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:13:30 by meharit           #+#    #+#             */
/*   Updated: 2023/12/01 18:53:52 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

long long ScalarConverter::store_int = 0;

int	check_char(const char *check)
{
	if (strlen(check) == 1 && (isprint(check[0]) && !isdigit(check[0])))
		return (1);
	return (0);
}

int	check_int(const char *check, long long *tmp)
{
	char *buff;
	long cast = strtol(check, &buff, 10);
	(void) cast;
	if (*buff)
		return (0);
	*tmp = atoll(check);
	// std::cout << "----------------- " << *tmp << std::endl;
	return (1);
}

// void	check_float(const char *check)
// {
	
// }

// void	check_double(const char *check)
// {
	
// }

void	convert_char(std::string input)
{
	std::cout << "char : '" << input[0] << "'" << std::endl;
	std::cout << "int : " << (int) input[0] << std::endl;
	std::cout << "float : " << (int) input[0] << ".0f" << std::endl;
	std::cout << "double : " << (int) input[0] << ".0" << std::endl;
	exit(0);
}

void	convert_int(std::string input, long long tmp)
{
	(void) input;
	if (!isprint(tmp))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << (char) tmp << "'" << std::endl;
	if (tmp < INT_MIN || tmp > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << tmp << std::endl;
	std::cout << "float : " << static_cast<float>(tmp) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(tmp) << ".0" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (check_char(input.c_str()))
		convert_char(input);
	if (check_int(input.c_str(), &store_int))
	{
		convert_int(input, store_int);
	}
	else
		std::cout << "other\n";

}
