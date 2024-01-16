/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:58:33 by meharit           #+#    #+#             */
/*   Updated: 2024/01/16 21:51:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        //canonical form//
        MutantStack(){}
        MutantStack(const MutantStack& og)
        {
            for (size_t i = 0; i < og.size(); i++)
            {
                this->push(og.c[i]);   
            }
        }
        MutantStack& operator=(const MutantStack& og)
        {
            this->c.clear();
            for (size_t i = 0; i < og.size(); i++)
            {
                this->push(og.c[i]);   
            }
            return (*this);
        }
        ~MutantStack(){}
        //////////////////

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin()
        {
            return (this->c.begin());
        }

        iterator end()
        {
            return (this->c.end());
        }

        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }

        reverse_iterator rend()
        {
            return (this->c.rend());
        }
};
