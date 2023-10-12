/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:22:48 by meharit           #+#    #+#             */
/*   Updated: 2023/10/12 18:47:08 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap's Default constructor called" << std::endl;
	Energy_points = 50;
	Name = "Unkown";
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name + "_clap_name") , ScavTrap(_Name + "_clap_name"), FragTrap(_Name + "_clap_name") 
{
	std::cout << "DiamondTrap's Constructor called" << std::endl;
	Name = _Name;
	Energy_points = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& og) : ClapTrap()
{
	std::cout << "DiamondTrap's Copy constructor called" << std::endl;
	Energy_points = og.Energy_points;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& og)
{
	std::cout << "DiamondTrap's Copy assignement operator called" << std::endl;
	ClapTrap::operator=(og);
	Energy_points = og.Energy_points;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	if (Hit_points <= 0)
	{
		std::cout << "DiamondTrap " << Name << " don't have any hit points left(whoAmI)" << std::endl;
		return;
	}
	std::cout << "I am DiamondTrap " << Name << " ; Claptrap " << ClapTrap::Name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's Destructor called" << std::endl;
}