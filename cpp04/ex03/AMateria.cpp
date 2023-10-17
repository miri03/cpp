/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:42:17 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 03:11:11 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria's Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria's Parameterized constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& og)
{
	std::cout << "AMateria's Copy constructor called" << std::endl;
	*this = og;
}

AMateria& AMateria::operator=(const AMateria& og)
{
	std::cout << "AMateria's Assignement operator called"  << std::endl;
	type = og.type;
}

std::string const & AMateria::getType() const
{
	return(type);
}

AMateria::~AMateria()
{
	std::cout << "AMateria's Destructor called" << std::endl;
}
