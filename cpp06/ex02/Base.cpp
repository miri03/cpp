/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:14:34 by meharit           #+#    #+#             */
/*   Updated: 2023/12/23 21:54:44 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>

Base::~Base(){}

Base* generate(void)
{
	srand(time(NULL));
	int r_num = rand() % 3 + 1;
	switch(r_num)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout <<"Is class A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout <<"Is class B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout <<"Is class C" << std::endl;
		return;
	}
	std::cout << "Type invalid" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& ref_A = dynamic_cast<A&>(p);
		(void) ref_A;
		std::cout << "Is class A" << std::endl;
	}
	catch(std::exception &e)
	{
		try
		{
			B& ref_B = dynamic_cast<B&>(p);
			(void) ref_B;
			std::cout << "Is class B" << std::endl;
		}
		catch(std::exception &e)
		{
			try
			{
				C& ref_C = dynamic_cast<C&>(p);
				(void) ref_C;
				std::cout << "Is class C" << std::endl;
			}
			catch(std::exception &e)
			{
				std::cout << "Type invalid" << std::endl;
			}
		}
	}
}
