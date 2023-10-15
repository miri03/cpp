/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:58 by meharit           #+#    #+#             */
/*   Updated: 2023/10/15 18:37:39 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include  "Cat.hpp"
#include  "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta[4];
	
	for (int i = 0; i < 2; i++)
		meta[i] = new Cat;
	for (int i = 0; i < 2; i++)
		meta[i] = new Dog;
	// for (int i = 0; i < 10; i++)
	// 	delete meta[i];
	return 0;
} 