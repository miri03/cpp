/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:38:17 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 20:57:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character's Default constructor called" << std::endl;
}

Character::Character(std::string _name)
{
	std::cout << "Character's Parametrized constructor called" << std::endl;
	name = _name;
}

std::string const & Character::getName() const
{
	return (name);
}

Character::~Character()
{
	std::cout << "Character's Destructor called" << std::endl;
}