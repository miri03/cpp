/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:52:26 by meharit           #+#    #+#             */
/*   Updated: 2024/01/15 17:40:07 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	test1()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(11);
	sp.addNumber(9);
	sp.addNumber(3);
	
	std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span = " << sp.longestSpan() << std::endl;
}

void	test2()
{
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(11);
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(110);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
}

void	test3()
{
	try
	{
		Span sp(1);
		
		sp.addNumber(0);
		std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span = " << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test4()
{
	try{
		Span sp = Span(50);
		
		std::vector<int> _new;
		for (int i = 1; i <= 50; i++)
			_new.push_back(i);

		sp.addManyNumbers(_new.size(), _new.begin(), _new.end());
		std::cout << "Span size = " << _new.size() << std::endl;
		std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span = " << sp.longestSpan() << std::endl;
	}

	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "****test1*****" << std::endl;
	test1();
	std::cout << "****test2*****" << std::endl;
	test2();
	std::cout << "****test3*****" << std::endl;
	test3();
	std::cout << "****test4*****" << std::endl;
	test4();
}