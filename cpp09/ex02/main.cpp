/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:00:23 by meharit           #+#    #+#             */
/*   Updated: 2024/01/24 01:27:43 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    print_before(char **argv, int argc)
{
    std::cout << "Before:   ";
    for (int i = 1; i < argc; i++)
        std::cout << atoi(argv[i]) << " ";
    std::cout << std::endl;
}

void    print_cpu_time(clock_t end_v, clock_t start_v, clock_t end_d, clock_t start_d)
{
    std::cout << "Time to process a range of  " << _size << " elements with std::vector : ";
    std::cout << std::fixed << (float)(end_v - start_v) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

    std::cout << "Time to process a range of  " << _size << " elements with std::deque : ";
    std::cout << std::fixed << (float)(end_d - start_d) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        try 
        {
            pars_sequence(&argv[1], argc - 1);
            print_before(argv, argc);
            ///////////std::vector////////////////////////
            clock_t start_v = clock();
            ford_johnson_vector(argv, argc - 1);
            clock_t end_v = clock();

            /////////std::deque///////////////////////////
            clock_t start_d = clock();
            ford_johnson_deque(argv, argc - 1);
            clock_t end_d = clock();

            print_cpu_time(end_v, start_v, end_d, start_d);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Error: Please insert your positive integer sequence to sort" << std::endl;
}
