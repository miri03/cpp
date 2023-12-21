/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:03:46 by meharit           #+#    #+#             */
/*   Updated: 2023/12/21 10:42:06 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define RED "\x1b[31m"
#define RESET "\x1b[0m"

void	test()
{
	try{//*Empty array*//
		
		Array<std::string> empty;
		std::cout << empty[0] << std::endl;	
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl; 
	}
	try{//*Array of n elements*//
		std::cout << "-------------------------------------" << std::endl;
		Array<int> array_n(15);
		std::cout << "initialized by default : " << array_n[10] << std::endl;
		std::cout << "Array size : " << array_n.size() << std::endl;	
		std::cout << "assigning to array_n values from 0 to 14" << std::endl;
		for (int i = 0; i < 15 ; i++)
			array_n[i] = i;
		std::cout << "array_n content ==> ";
		for (int i = 0; i < 15 ; i++)
			std::cout << array_n[i] << " ";
		std::cout << std::endl;
		std::cout << "array_n at index 20 " << array_n[20] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl; 
	}
	
	try{//*Construction by copy and assignment operator*//
		std::cout << "-------------------------------------" << std::endl;
		Array<char> test(9);
		for (int i = 0; i < 9; i++)
			test[i] = i + 'A';
		Array<char> copy_test = test;
		std::cout << "copy_test size: " << copy_test.size() << " | test size: " << test.size() << std::endl;
		std::cout << "copy_test content ==> ";
		for (int i = 0; i < 9 ; i++)
			std::cout << copy_test[i] << " ";
		std::cout << std::endl;

		std::cout << "-------------------------------------" << std::endl;
		Array<char> assign_test;
		assign_test = test;
		std::cout << "assign_test size: " << assign_test.size() << " | test size: " << test.size() << std::endl;
		std::cout << "assign_test content ==> ";
		for (int i = 0; i < 9 ; i++)
			std::cout << assign_test[i] << " ";
		std::cout << std::endl;
		std::cout << "assign_test at index -2 " << assign_test[-2] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl; 
	}
}

int main(int, char**)
{
	//const int
	test();
}
