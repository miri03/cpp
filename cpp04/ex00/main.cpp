/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:38:58 by meharit           #+#    #+#             */
/*   Updated: 2023/10/14 15:20:54 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include  "Cat.hpp"
#include  "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << "---------Wrong---------------\n";

	const WrongAnimal* meta_ = new WrongAnimal();
	const WrongAnimal* i_ = new WrongCat();


	std::cout << i_->getType() << " " << std::endl;
	i_->makeSound(); //will output the wrong sound!
	meta_->makeSound();

	delete meta_;
	delete i_;

	return 0;
}