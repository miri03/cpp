/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:55:36 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/18 16:30:42 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter's Default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& og)
{
    std::cout << "ICharacter's Copy constructor called" << std::endl;
	*this = og;
}

ICharacter& ICharacter::operator=(const ICharacter& og)
{
	(void) og;
    std::cout << "ICharacter's assignement operator called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter's Destructor called" << std::endl;
}