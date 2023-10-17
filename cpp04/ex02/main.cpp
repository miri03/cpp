/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:58 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 02:24:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include  "Cat.hpp"
#include  "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal test;  //should give an error
	
	const Animal* meta[4];
	
	for (int i = 0; i < 2; i++)
		meta[i] = new Cat;
	std::cout << "##################" << std::endl;
	for (int i = 2; i < 4; i++)
		meta[i] = new Dog;
	std::cout << "##################" << std::endl;
	for (int i = 0; i < 4; i++)
		delete meta[i];

	//////////////////COPY CONSTRUCTOR/ASSIGNEMENT TEST///////
	// Dog Jake;
	// Dog Buddy(Jake);
	// std::cout << "Get Type = " << Jake.getType() << std::endl;
	// std::cout << "Get Type = " << Buddy.getType() << std::endl;
	// Buddy.makeSound();
	// Jake.makeSound();

	// Dog puppy;
	// puppy  = Jake;
	// std::cout << "Get Type = " << puppy.getType() << std::endl;
	// puppy.makeSound();
	//////////////////////////////////////////////

	return 0;
}
