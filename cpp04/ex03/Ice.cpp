/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:59:41 by meharit           #+#    #+#             */
/*   Updated: 2023/10/18 14:53:08 by meharit          ###   ########.fr       */
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

void Ice::use(ICharacter& target)
{
	std::cout << "Ice * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice's Destructor called" << std::endl;
}