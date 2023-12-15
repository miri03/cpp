/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:23:13 by meharit           #+#    #+#             */
/*   Updated: 2023/12/12 15:28:05 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	check_dot(const char* str)
{
	for(int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			return (1);
	}
	return (0);
}

int error_is_all_alpha(const char* str)
{
	int i = 0;
    for ( ; i < (int)strlen(str) - 1; i++)
    {
        if (isalpha(str[i]))
            return (1);
	}
	
	if (!isdigit(str[i]) && str[i] != 'f')
		return (1);

    return (0);
}

int additional_check(std::string input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (0);
    if (input == "-inf" || input == "+inf" || input == "nan")
        return (0);
	
    if (strlen(input.c_str()) > 1 && (input[0] == '.' || error_is_all_alpha(input.c_str())))
        return(1);
    return (0);
}

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

int	check_double(const char *check)
{
	char	*buff;
	
	strtod(check, &buff);
	if (*buff)
		return (0);
	return (1);
}

int	check_float(const char *check)
{
	char *buff;

	strtof(check, &buff);
	if (!check_dot(check) || *buff != 'f')
		return (0);
		
	buff--;
	if (*buff == '.')
		return (0);
	std::cout << "is float\n";
	return (1);
}
