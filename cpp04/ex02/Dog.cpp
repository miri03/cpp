/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:52:34 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 01:48:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's Default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& og) : Animal()
{
	std::cout << "Dog's Copy constructor called" << std::endl;
	*this = og;
}

Dog& Dog::operator=(const Dog& og)
{
	std::cout << "Dog's assignement operator called" << std::endl;
	type = og.type;
	delete brain;
	brain = new Brain;
	*brain = *(og.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The Dog barks woof woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's Destructor called" << std::endl;
	delete brain;
}