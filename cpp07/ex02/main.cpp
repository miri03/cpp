/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:03:46 by meharit           #+#    #+#             */
/*   Updated: 2023/12/19 20:20:10 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

void	test()
{
	// try{
	// 	Array<const int> numbers(MAX_VAL);
	// 	std::cout << "size " << numbers.size() << std::endl;

	// 	srand(time(NULL));
	// 	for (int i = 0; i < MAX_VAL; i++)
	// 	{
	// 		const int value = rand() % 750 + 1;
	// 		numbers[i] = value;
	// 	}
	// 	for (int i = 0; i < 10; i++)
	// 	{
	// 		std::cout << numbers[i] << std::endl;	
	// 	}
	// 	std::cout << "+++++++++++++++++++++++++++++++++++++\n";
	// 	{
	// 		Array<int> tmp ;
	// 		tmp = numbers;
	// 		Array<int> test(tmp);
	// 	std::cout << "+++++++++++++++++++++++++++++++++++++\n";
		
	// 	for (int i = 0; i < 10; i++)
	// 	{
	// 		std::cout << tmp[i] << std::endl << "------------\n";
	// 	}
	// 	}
	// }

	//  catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }	
	 Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	//My tests
	{
		//Empty array
		Array<int> g;
		
		try{
			std::cout << g[0] << std::endl;
		}
		catch(std::exception &e)	{
			std::cout << e.what() << std::endl;
		}
		//Different types
		// Array<int> s(10);

		// for (int i = 65, j = 0; i < 75; i++)	{
		// 	s[j++] = i;
		// }
		// Array<char> t(s);
		// try{
		// 	std::cout << s[5] << std::endl;
		// 	std::cout << t[0] << std::endl;
		// 	std::cout << t[1] << std::endl;
		// 	std::cout << s[-256] << std::endl;
		// }
		// catch (std::exception &e)	{
		// 	std::cout << e.what() << std::endl;
		// }
		{
			const Array<int> a(5);

			for (unsigned int i = 0; i < 5; i++)    {
				std::cout << a[i] << " ";
			}
			std::cout << std::endl;
		}
	}
}

int main(int, char**)
{

	test();
	system("leaks Array");
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // return 0;

	// try{
	// 	Array<int> numbers;
	// 	std::cout << "size " << numbers.size() << std::endl;
	// 	std::cout << numbers[1] << std::endl;
	// }
	// catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

	// int *test = new int[0];
	// std::cout << test[0] << std::endl;
}
