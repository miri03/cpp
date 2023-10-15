/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:43:29 by meharit           #+#    #+#             */
/*   Updated: 2023/10/14 15:05:54 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's Default constructor called" << std::endl;
	type = "Defaut";
}

WrongAnimal::WrongAnimal(const WrongAnimal& og)
{
	std::cout << "WrongAnimal's Copy constructor called" << std::endl;
	*this = og;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& og)
{
	std::cout << "WrongAnimal's Copy constructor called" << std::endl;
	type = og.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return(type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The Wronganimal makes a sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's Destructor called" << std::endl;
}