/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:01:47 by meharit           #+#    #+#             */
/*   Updated: 2023/12/19 20:21:06 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        unsigned int _size;
        T	*array;

	public:
	
        Array()
        {
			std::cout << "Default constructor\n";
			_size = 0;
            array = new T[0];
        }

		~Array()
		{
			delete[] array;
		}

		Array(unsigned int n)
		{
			std::cout << "Parametrized constructor n ==== " << n << std::endl;
			_size = n;
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = 0;
		}

		Array(const Array &og)
		{
			std::cout << "Copy constructor\n";
			array = new T[og.size()];
			for (unsigned int i = 0; i < og.size(); i++)
				array[i] = og.array[i];
			_size = og.size();
		}

		Array& operator=(const Array &og)
		{
			std::cout << "Assignment operator ======== " << og.size() << std::endl;
			delete[] array;
			array = new T[og.size()];
			for (unsigned int i = 0; i < og.size(); i++)
				array[i] = og.array[i];
			_size = og.size();
			return (*this);
		}

		T& operator[](unsigned int index)
		{
			if (index >= _size || index < 0)
				throw IndexException();
			return (array[index]);
		}

		const T& operator[](unsigned int index) const
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
