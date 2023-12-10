/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:50:00 by meharit           #+#    #+#             */
/*   Updated: 2023/12/08 16:15:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstring>
# include <string>
# include <cctype>
# include <cstdlib>
# include <stdlib.h> 
# include <limits.h>
# include <cmath>

class ScalarConverter
{
	private:
	//////////canonical form/////////////////////
		ScalarConverter();
		ScalarConverter(const ScalarConverter& og);
		ScalarConverter operator=(const ScalarConverter& og);
		~ScalarConverter();
	//////////////////////////////////////////////
	public:
		static void	convert(std::string);	
};

int	check_char(const char *check);
int	check_int(const char *check);
int	check_double(const char *check);
int	check_float(const char *check);
int additional_check(std::string input);