/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:52:26 by meharit           #+#    #+#             */
/*   Updated: 2024/01/12 11:53:46 by meharit          ###   ########.fr       */
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

void	test4()
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

void	test5()
{
	try{
		Span sp = Span(10000);
		
		std::vector<int> _new;         // the vector to add to sp
		for (int i = 0; i < 10000; i++)
			_new.push_back(i);

		sp.addManyNumbers(_new.size(), _new.begin(), _new.end());
		sp.display();
		std::cout << _new.size() << std::endl; 
	}

	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	test1();	
	// test2();	
	// test3();	
	// test4();	
}