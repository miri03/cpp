/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:33:57 by meharit           #+#    #+#             */
/*   Updated: 2023/10/07 17:57:09 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap's Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name)
{
	std::cout << "ScavTrap's constructor called" << std::endl;
	set_hit_p(100);
	set_attack_d(20);
	set_energy_p(50);
}

void ScavTrap::guardGate()
{
	// std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor called" << std::endl;
}