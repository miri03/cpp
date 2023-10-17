/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:59:41 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 16:41:29 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice's Default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice& og)
{
	std::cout << "Ice's Copy constructor called" << std::endl;
	*this = og;
}

Ice& Ice::operator=(const Ice& og)
{
	(void) og;
	std::cout << "Ice's Assignement operator called"  << std::endl;
	return(*this);
}

AMateria* Ice::clone() const
{
	return (new Ice);
}

Ice::~Ice()
{
	std::cout << "Ice's Destructor called" << std::endl;
}