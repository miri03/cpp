/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:53:45 by meharit           #+#    #+#             */
/*   Updated: 2023/10/14 00:11:25 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& og) : Animal()
{
	std::cout << "Cat's Copy constructor called" << std::endl;
	*this = og;
}

Cat& Cat::operator=(const Cat& og)
{
	std::cout << "Cat's Copy constructor called" << std::endl;
	type = og.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The cat meows meow meow " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat's Destructor called" << std::endl;
}