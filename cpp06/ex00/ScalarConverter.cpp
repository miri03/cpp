/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:13:30 by meharit           #+#    #+#             */
/*   Updated: 2023/12/01 14:33:18 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	check_char(const char *check)
{
	if (strlen(check) == 1 && isprint(check[0]))
		return (1);
	return (0);
}

// void	check_int(const char *check)
// {
	
// }

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
	std::cout << "double : " << (double) input[0] << ".0f" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (check_char(input.c_str()))
	{
		convert_char(input);
	}
	else
		std::cout << "other\n";

}