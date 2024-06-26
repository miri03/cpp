/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:08:24 by meharit           #+#    #+#             */
/*   Updated: 2024/01/16 22:19:05 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

#include <vector>
#include <list>
#include <deque>

class Exception_Not_Found : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("No occurrence is found !!");
		}
};

template<typename T>
void	easyfind(T haystack, int needle)
{
	if (std::find(haystack.begin(), haystack.end(), needle) != haystack.end())
	{
		std::cout << "Integer " << needle << " found." <<  std::endl;
		return ;
	}

	throw Exception_Not_Found();
}
