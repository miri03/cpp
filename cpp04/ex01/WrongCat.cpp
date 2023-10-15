/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:43:27 by meharit           #+#    #+#             */
/*   Updated: 2023/10/14 15:07:33 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat's Default constructor called" << std::endl;
	type = "Cat";
}

WrongCat::WrongCat(const WrongCat& og) : WrongAnimal()
{
	std::cout << "WrongCat's Copy constructor called" << std::endl;
	*this = og;
}

WrongCat& WrongCat::operator=(const WrongCat& og)
{
	std::cout << "WrongCat's Copy constructor called" << std::endl;
	type = og.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "The WrongCat makes a sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's Destructor called" << std::endl;
}