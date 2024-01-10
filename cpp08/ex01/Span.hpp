/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:09 by meharit           #+#    #+#             */
/*   Updated: 2024/01/10 20:58:43 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>

class Span 
{
	private:
		unsigned int		N;
		std::vector<int>	span;
	public:
		//canonical form//
		Span();
		// Span(const Span& og);
		// Span& operator=(const Span &og);
		~Span();
		//////////////////
		
		Span(unsigned int);
		void	addNumber(int);
		int		shortestSpan();			
		int		longestSpan();

		class Exception_Max_N : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("There are already N elements stored !!");
				}
		};

		class Exception_No_Span : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("No span can be found. There are no numbers stored, or only one !!");
				}
		};

		unsigned int get_N();

		void	display()
		{
			for (unsigned int i = 0 ; i < N ; i++)
				std::cout << span[i] << std::endl;
		}
};