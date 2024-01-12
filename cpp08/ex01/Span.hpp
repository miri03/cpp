/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:09 by meharit           #+#    #+#             */
/*   Updated: 2024/01/12 11:19:33 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>

#include <cstdlib>

class Span 
{
	private:
		unsigned int		N;
		std::vector<int>	span;
	public:
		//canonical form//
		Span();
		Span(const Span& og);
		Span& operator=(const Span &og);
		~Span();
		//////////////////
		
		Span(unsigned int);
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();

		void	addManyNumbers(unsigned int, std::vector<int>::const_iterator, std::vector<int>::const_iterator);

		class Exception_Max_N : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class Exception_No_Span : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void	display();
};
