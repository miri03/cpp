/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:15:34 by meharit           #+#    #+#             */
/*   Updated: 2023/12/18 18:01:06 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array 
{
	private:
		int size;
		T	*array;
	public:
		Array()	//check if array is empty
		{
			std::cout << "Default constructor\n";
			size = 0;
			T array[] = {};
		}

		Array(unsigned int n)
		{
			std::cout << "Parametrized constructor\n";
			size = n;
			array = new T();
			for (unsigned int i = 0; i < n; i++)
				array[n] = 0;	
		}

		Array(const Array& og)
		{
			std::cout << "copy constructor\n";
			*this = og;
		}
		Array operator=(const Array& og)
		{
			std::cout << "Assignement operator\n";
			for (int i = 0; i < size; i++)
			{
				*this->array[i] = og.array[i];
			}
			return (*this);
		}

};