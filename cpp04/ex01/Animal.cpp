/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:34:22 by meharit           #+#    #+#             */
/*   Updated: 2023/10/14 00:10:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's Default constructor called" << std::endl;
	type = "Defaut";
}

Animal::Animal(const Animal& og)
{
	std::cout << "Animal's Copy constructor called" << std::endl;
	*this = og;
}

Animal& Animal::operator=(const Animal& og)
{
	std::cout << "Animal's Copy constructor called" << std::endl;
	type = og.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return(type);
}

void	Animal::makeSound() const
{
	std::cout << "The animal makes a sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal's Destructor called" << std::endl;
}