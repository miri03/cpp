/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:58:33 by meharit           #+#    #+#             */
/*   Updated: 2024/01/12 21:41:26 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        //canonical form//
        MutantStack(){}
        // MutantStack(const MutantStack& og){}
        // MutantStack& operator=(const MutantStack& og){}
        ~MutantStack(){}
        //////////////////

        // class iterator
        // {
        //   public:
        //     iterator& operator=(const std::deque<T>::iterator& og)
        //     {
        //         (void) og;
        //         return (NULL);    
        //     }  
        // };

        T* begin()
        {
            if (!this->empty())
           { T tmp = this->end();
            std::cout << "tmp " << tmp << std::endl;}
            else
                std::cout << "is empty\n";
            std::cout << "==== |" << this << " | " << " =====\n";
            return (&(this->top()));
        }

};
