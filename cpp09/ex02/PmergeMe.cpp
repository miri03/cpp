/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:01:47 by meharit           #+#    #+#             */
/*   Updated: 2024/01/24 01:27:06 by meharit          ###   ########.fr       */
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

template<typename T>
void    swap(T& container)
{
    int tmp;

    tmp = container.first;
    container.first = container.second;
    container.second = tmp;
}

void    ford_johnson_vector(char **arr, int c)
{
    int straggler = -1;
    
    if (c % 2 != 0)             //Step 1: ‘Straggler’ Catching
        straggler = atoi(arr[c]);

    std::cout << "C ====> " << c << std::endl;
    std::cout << "straggler ====> " << straggler << std::endl;

    std::vector<std::pair<int,int> > vector; //Step2: Create_pairs
    for (int i = 1; i < c; i+=2)
        vector.push_back(std::make_pair(atoi(arr[i]), atoi(arr[i+1])));

    for (size_t i = 0; i < vector.size(); i++) //Step3: Sort_each_pair
    {
        if (vector[i].first > vector[i].second)
            swap(vector[i]);
    }
    for (size_t i = 0; i < vector.size(); i++) //print
    {
       std::cout << vector[i].first << std::endl;
       std::cout << vector[i].second << std::endl;
       std::cout << "=================\n";
    }
    
    for (size_t i = 0; i < vector.size(); i++) //Step4: Sort the pairs by greatest value
    {
        int index = i;
        size_t j = i+1;
        // std::cout << "before index " << index << " i " << i << " j " << j << std::endl;

        for (; j < vector.size(); j++)
        {
            if (vector[j].second < vector[i].second && vector[index].second > vector[j].second)
                index = j;
        }
        // std::cout << "after index " << index << " i " << i << " j " << j << std::endl;
        // std::cout << "the smallest = " << vector[index].second << " the current = " << vector[i].second << std::endl;
        std::swap(vector[index], vector[i]);
    }
    for (size_t i = 0; i < vector.size(); i++) //print
    {
       std::cout << vector[i].first << std::endl;
       std::cout << vector[i].second << std::endl;
       std::cout << "=================\n";
    }
    
    std::vector<int> S;
    for (size_t i = 0; i < vector.size(); i++)
    {
        S.push_back(vector[i].second);
    }
    std::vector<int>::iterator up_bound;
    for (std::vector<std::pair<int, int> >::iterator it = vector.begin(); it != vector.end(); it++)
    {
        S.insert(std::upper_bound(S.begin(), S.end(), it->first), it->first);
    }
    for(size_t i = 0; i < S.size(); i++)
    {
        std::cout << S[i] << std::endl;
    }
}

void    ford_johnson_deque(char **arr, int c)
{
    int straggler = -1;
    
    if (c % 2 != 0)             //Step 1: ‘Straggler’ Catching
        straggler = atoi(arr[c]);

    std::cout << "C ====> " << c << std::endl;
    std::cout << "straggler ====> " << straggler << std::endl;

    std::deque<std::pair<int,int> > deque; //Step2: Create_pairs
    for (int i = 1; i < c; i+=2)
        deque.push_back(std::make_pair(atoi(arr[i]), atoi(arr[i+1])));

    for (size_t i = 0; i < deque.size(); i++) //Step3: Sort_each_pair
    {
        if (deque[i].first > deque[i].second)
            swap(deque[i]);
    }
    for (size_t i = 0; i < deque.size(); i++) //print
    {
       std::cout << deque[i].first << std::endl;
       std::cout << deque[i].second << std::endl;
       std::cout << "=================\n";
    }
    
    for (size_t i = 0; i < deque.size(); i++) //Step4: Sort the pairs by greatest value
    {
        int index = i;
        size_t j = i+1;
        // std::cout << "before index " << index << " i " << i << " j " << j << std::endl;

        for (; j < deque.size(); j++)
        {
            if (deque[j].second < deque[i].second && deque[index].second > deque[j].second)
                index = j;
        }
        // std::cout << "after index " << index << " i " << i << " j " << j << std::endl;
        // std::cout << "the smallest = " << deque[index].second << " the current = " << deque[i].second << std::endl;
        std::swap(deque[index], deque[i]);
    }
    for (size_t i = 0; i < deque.size(); i++) //print
    {
       std::cout << deque[i].first << std::endl;
       std::cout << deque[i].second << std::endl;
       std::cout << "=================\n";
    }
    
    std::deque<int> S;
    for (size_t i = 0; i < deque.size(); i++)
    {
        S.push_back(deque[i].second);
    }
    std::deque<int>::iterator up_bound;
    for (std::deque<std::pair<int, int> >::iterator it = deque.begin(); it != deque.end(); it++)
    {
        S.insert(std::upper_bound(S.begin(), S.end(), it->first), it->first);
    }
    for(size_t i = 0; i < S.size(); i++)
    {
        std::cout << S[i] << std::endl;
    }
}
