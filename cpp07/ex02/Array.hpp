/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:01:47 by meharit           #+#    #+#             */
/*   Updated: 2023/12/28 17:11:08 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

#include <cstdlib> //rand()

template<typename T>
class Array
{
    private:
        unsigned int _size;
        T	*array;

	public:
	
        Array()
        {
			_size = 0;
            array = new T[0];
        }

		~Array()
		{
			delete[] array;
		}

		Array(unsigned int n)
		{
			_size = n;
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = 0;
		}

		Array(const Array &og)
		{
			array = new T[og.size()];
			for (unsigned int i = 0; i < og.size(); i++)
				array[i] = og.array[i];
			_size = og.size();
		}

		Array& operator=(const Array &og)
		{
			delete[] this->array;
			array = new T[og.size()];
			for (unsigned int i = 0; i < og.size(); i++)
				array[i] = og.array[i];
			_size = og.size();
			return (*this);
		}
		
		const T& operator[](unsigned int index) const
		{
			if (index >= _size || index < 0)
				throw IndexException();
			return (array[index]);
		}
		
		T& operator[](unsigned int index)
		{
			if (index >= _size || index < 0)
				throw IndexException();
			return (array[index]);
		}
		
		unsigned int size() const
		{
			return (_size);
		}
		
	class IndexException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of range");
			}
	};
};
