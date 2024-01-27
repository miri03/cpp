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
        throw std::runtime_error("PmergeMe doesn't accept negative numbers");
    if (str[0] == '+' &&  str[1] && isdigit(str[1]))
        return 1;
    return 0;
}

void    check_empty(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            return ;
    }
    throw std::runtime_error("Invalid sequence");
}

void    pars_sequence(char **arg, int count)
{
    for (int i = 0; i < count; i++)
    {
        check_empty(arg[i]);
        for (int j = 0;arg[i][j]; j++)
        {
            if (!std::isdigit(arg[i][j]) && !is_sign(&arg[i][j])) 
                throw std::runtime_error("invalid argument list");
        }
    }
}

void    swap(std::pair<int,int>& pair)
{
    int tmp;

    tmp = pair.first;
    pair.first = pair.second;
    pair.second = tmp;
}

template<typename T>
void    recursive_bubble_sort(T &container, int n)
{
    if (n == 1)
        return;
    int count = 0;
    typename T::iterator it;
    typename T::iterator next;
    int i = 0;
    for (it = container.begin(); i < n-1; it++)
    {
        next = (it+1);
        if ((*it).second > (*next).second)
        {
            std::swap((*it).second, (*next).second);
            if (((*it).first > (*it).second))
                std::swap((*it).first, (*it).second);
            count++;
        }
        i++;
    }
    if (count == 0)
        return;
    recursive_bubble_sort(container, n-1);
    
}

void    ford_johnson_vector(char **arr, int c, _time& process_time)
{
    process_time.start_v = clock();

    int straggler = -1;
    
    if (c % 2 != 0)             //Step 1: ‘Straggler’ Catching
        straggler = atoi(arr[c]);

    std::vector<std::pair<int,int> > vector; //Step2: Create_pairs
    for (int i = 1; i < c; i+=2)
        vector.push_back(std::make_pair(atoi(arr[i]), atoi(arr[i+1])));

    for (size_t i = 0; i < vector.size(); i++) //Step3: Sort_each_pair
    {
        if (vector[i].first > vector[i].second)
            swap(vector[i]);
    }
    recursive_bubble_sort(vector, vector.size()); //Step4: Sort the pairs by greatest value

    std::vector<int> S;
    for (size_t i = 0; i < vector.size(); i++) //Step5: Creating ‘S’ sequence
    {
        S.push_back(vector[i].second);
    }
    std::vector<int>::iterator up_bound;
    for (std::vector<std::pair<int, int> >::iterator it = vector.begin(); it != vector.end(); it++) // Inserting the remaining ‘pend’ elements
    {
        S.insert(std::upper_bound(S.begin(), S.end(), it->first), it->first);
    }
    if (straggler != -1) //Inserting the straggler
        S.insert(std::upper_bound(S.begin(), S.end(), straggler), straggler);

    process_time.end_v = clock();
}

void    ford_johnson_deque(char **arr, int c, _time& process_time)
{
    process_time.start_d = clock();

    int straggler = -1;
    
    if (c % 2 != 0)             //Step 1: ‘Straggler’ Catching
        straggler = atoi(arr[c]);

    std::deque<std::pair<int,int> > deque; //Step2: Create_pairs
    for (int i = 1; i < c; i+=2)
        deque.push_back(std::make_pair(atoi(arr[i]), atoi(arr[i+1])));

    std::deque<std::pair<int,int> >::iterator it;
    for (it = deque.begin(); it != deque.end(); it++) //Step3: Sort_each_pair
    {
        if ((*it).first > (*it).second)
            swap((*it));
    }

    recursive_bubble_sort(deque, deque.size()); //Step4: Sort the pairs by greatest value

    std::deque<int> S;
    for (it = deque.begin(); it != deque.end(); it++) //Step5: Creating ‘S’ sequence
    {
        S.push_back((*it).second);
    }

    std::deque<int>::iterator up_bound;
    for (std::deque<std::pair<int, int> >::iterator it = deque.begin(); it != deque.end(); it++) // Inserting the remaining ‘pend’ elements
    {
        S.insert(std::upper_bound(S.begin(), S.end(), it->first), it->first);
    }
    if (straggler != -1) //Inserting the straggler
        S.insert(std::upper_bound(S.begin(), S.end(), straggler), straggler);

    process_time.end_d = clock();

    ///////////////////////////////////////////////////////////////////////////
    std::cout << "After:    ";
    for (std::deque<int>::iterator it = S.begin(); it != S.end(); it++)
        std::cout << (*it) << " ";
    std::cout << std::endl;
    print_process_time(S.size(), process_time);
}
