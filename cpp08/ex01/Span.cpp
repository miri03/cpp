/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:19:03 by meharit           #+#    #+#             */
/*   Updated: 2024/01/15 17:04:59 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n){}

void	Span::addNumber(int num)
{
	if (N == span.size())
		throw Exception_Max_N();
	span.push_back(num);
}

int	Span::shortestSpan()
{
	if (N == 0 || N == 1)
		throw Exception_No_Span();
	
	int hold;
	int first;
	std::vector<int>::iterator it;
	std::vector<int>::iterator i;
	
	for (it = span.begin(); it != span.end(); ++it)
	{
		first = *it;
		if (it == span.begin())
			hold = abs(first - *(it+1));

		for (i = it+1; i != span.end(); i++)
		{
			if (hold > abs(first - *i))
				hold = abs(first - *i);
		}
	}
	return (hold);
}

int	Span::longestSpan()
{
	if (N == 0 || N == 1)
	throw Exception_No_Span();
	
	int hold;
	int first;
	std::vector<int>::iterator it;
	std::vector<int>::iterator i;
	
	for (it = span.begin(); it != span.end(); ++it)
	{
		first = *it;
		if (it == span.begin())
			hold = abs(first - *(it+1));

		for (i = it+1; i != span.end(); i++)
		{
			if (hold < abs(first - *i))
				hold = abs(first - *i);
		}
	}
	return (hold);
}

void	Span::addManyNumbers(unsigned int n, std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
	if (span.size() + n > N)
		throw Exception_Max_N();
	span.insert(span.end(), first, last);
}

const char*	Span::Exception_Max_N::what() const throw()
{
	return ("There are already N elements stored !!");
}

const char*	Span::Exception_No_Span::what() const throw()
{
	return ("No span can be found. There are no numbers stored, or only one !!");
}

//canonical form//
Span::Span() : N(0){}

Span::Span(const Span& og)
{
	N = og.N;
	addManyNumbers(span.size(), og.span.begin(), og.span.end());
}

Span& Span::operator=(const Span &og)
{
	N = og.N;
	span.clear();
	addManyNumbers(span.size(), og.span.begin(), og.span.end());
	return (*this);
}

Span::~Span(){}
//////////////////
