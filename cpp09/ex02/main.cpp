/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:00:23 by meharit           #+#    #+#             */
/*   Updated: 2024/01/23 15:08:49 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        try 
        {
            pars_sequence(&argv[1], argc - 1);
            ford_johnson_vector(argv, argc - 1);
            
        }
        catch(const char* exception)
        {
            std::cout << exception << std::endl;
        }
    }
    else
        std::cout << "Error: Please insert your positive integer sequence to sort" << std::endl;
}


// "    4" 3 4 5 2