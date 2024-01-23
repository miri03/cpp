/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:01:47 by meharit           #+#    #+#             */
/*   Updated: 2024/01/23 15:27:58 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int is_sign(char *str)
{
    if (str[0] == '-' &&  str[1] && isdigit(str[1]))
        throw "PmergeMe doesn't accept negative numbers";
    if (str[0] == '+' &&  str[1] && isdigit(str[1]))
        return 1;
    return 0;
}

void    pars_sequence(char **arg, int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0;arg[i][j]; j++)
        {
            if (!isdigit(arg[i][j]) && !isspace(arg[i][j]) && !is_sign(&arg[i][j])) 
                throw "PmergeMe accepts a sequence of integers to sort";
        }
    }
}

void    ford_johnson_vector(char **arr, int c)
{
    int straggler = -1;
    
    if (c % 2 != 0)             //Step 1: ‘Straggler’ Catching
        straggler = atoi(arr[c]);

    std::cout << "C ====> " << c << std::endl;
    std::cout << "straggler ====> " << straggler << std::endl;
    
    std::vector<int *> vector;
    int *tmp;
    for (int i = 1; i < c; i+=2) //Step 2: Creating Pairs
    {
        tmp = new int[2];
        std::cout << tmp << " i " << i << std::endl;
        tmp[0] = atoi(arr[i]);
        tmp[1] = atoi(arr[i+1]);
        vector.push_back(tmp);
    }
    std::cout << "=============================\n";
    for (unsigned long i = 0; i < vector.size(); i++)
    {
        int* tt = vector[i];
        std::cout << tt[0] << std::endl;
        std::cout << tt[1] << std::endl;
        std::cout << "--------------------\n";
    }
    









    
    for (unsigned long i = 0; i < vector.size(); i++)
    {
        delete[] vector[i];
    }
}
