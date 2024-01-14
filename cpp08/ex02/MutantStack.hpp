/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:58:33 by meharit           #+#    #+#             */
/*   Updated: 2024/01/14 23:32:53 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <deque>

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

        const_iterator cbegin()//
        {
            return (this->c.cbegin());
        }

        const_iterator cend()//
        {
            return (this->c.cend());
        }

        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }

        reverse_iterator rend()
        {
            return (this->c.rend());
        }

        reverse_iterator crbegin()//
        {
            return (this->c.crbegin());
        }

        reverse_iterator crend()
        {
            return (this->c.crend());//
        }

};
