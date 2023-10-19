/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:38:17 by meharit           #+#    #+#             */
/*   Updated: 2023/10/20 00:26:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character's Default constructor called" << std::endl;
	name = "undefined";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string _name)
{
	std::cout << "Character's Parametrized constructor called" << std::endl;
	name = _name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& og)
{
	std::cout << "Character's Copy constructor called" << std::endl;
	name = og.name;
	for (int i = 0; i < 4; i++)
	{
		if (!og.inventory[i])
			inventory[i] = NULL;
		else
			inventory[i] = (og.inventory[i]->clone());
	}
}

Character& Character::operator=(const Character& og)
{
	std::cout << "Character's Assignement operator called" << std::endl;
	name = og.name;
	for (int i = 0; i < 4; i++)
	{
		if (!og.inventory[i])
			inventory[i] = NULL;
		else
		{
			delete inventory[i];
			inventory[i] = (og.inventory[i]->clone());
		}
	}
	return(*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return;			
		}
	}
	std::cout << "inventory full\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0  && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "Can't use slot of index " << idx << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		std::cout << "### unequip " << inventory[idx] << std::endl;
		inventory[idx] = NULL;
	}
}

Character::~Character()
{
	std::cout << "Character's Destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		if (inventory[i])	{
			std::cout << "ch des -- " << inventory[i] << std::endl;
			delete inventory[i];
		}
		i++;
	}
}
