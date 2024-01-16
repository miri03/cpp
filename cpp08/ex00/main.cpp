/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:08:22 by meharit           #+#    #+#             */
/*   Updated: 2024/01/16 18:32:43 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	//vector//
	try
	{
		std::vector<int> v;
		for (int i = 0; i <= 5; i++)
		{
			v.push_back(i);
		}
		easyfind(v, 4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	
	//list//
	try
	{
		std::list<int> lst;
		for (int i = 0; i <= 5; i++)
		{
			lst.push_back(i);
		}
		easyfind(lst, 12);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//deque//
	try
	{
		std::deque<int> dq;
		for (int i = 0; i <= 5; i++)
		{
			dq.push_back(i);
		}
		easyfind(dq, 4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
}