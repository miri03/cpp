/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:33:57 by meharit           #+#    #+#             */
/*   Updated: 2023/10/07 20:19:01 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name)
{
	std::cout << "ScavTrap's Constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap's Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& og) : ClapTrap()
{
	std::cout << "ScavTrap's Copy constructor called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& og)
{
	std::cout << "ScavTrap's Assignement operator called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (Energy_points == 0)
	{
		std::cout << "ScavTrap " << Name << " can't attack, no energy points!!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name <<  " attacks " << target;
	std::cout << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Energy_points -= 1;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor called" << std::endl;
}