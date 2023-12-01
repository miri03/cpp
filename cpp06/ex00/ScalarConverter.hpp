/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:50:00 by meharit           #+#    #+#             */
/*   Updated: 2023/12/01 18:49:11 by meryemharit      ###   ########.fr       */
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

class ScalarConverter
{
	public:
		static long long		store_int;
		static void	convert(std::string);	
};