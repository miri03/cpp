/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:22:48 by meharit           #+#    #+#             */
/*   Updated: 2023/10/09 20:25:46 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap's Default constructor called" << std::endl;
	// Name = "Unknown";
	Energy_points = 50;
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name + "_clap_name")
{
	std::cout << "DiamondTrap's Constructor called" << std::endl;
	Name = _Name + "_clap_name";
	std::cout << Name << std::endl;

	Energy_points = 50;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's Destructor called" << std::endl;
}