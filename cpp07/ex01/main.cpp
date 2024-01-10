/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:05:33 by meharit           #+#    #+#             */
/*   Updated: 2023/12/28 16:05:51 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename A>
void print(A S)
{
	std::cout << S << std::endl;
}

int main()
{
	std::string array[5] = {"first", "sec", "third", "hello", "test"};

	iter(array, 3, print<std::string>);
}
