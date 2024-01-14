/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:58:31 by meharit           #+#    #+#             */
/*   Updated: 2024/01/14 22:49:16 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <iostream>

void test1()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::reverse_iterator it = mstack.rbegin();
    MutantStack<int>::reverse_iterator ite = mstack.rend();
    
    ++it;
    --it;

    std::cout << "*******************\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "*******************\n";
    std::stack<int> s(mstack);
}

void test2()
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    mstack.push_back(3);

    std::list<int>::const_iterator it = mstack.begin();
    std::list<int>::const_iterator ite = mstack.end();


    it++;

    std::cout << "*******************\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "*******************\n";
}

int main()
{
    test1();
}
