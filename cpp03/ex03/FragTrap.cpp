/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:46:03 by meharit           #+#    #+#             */
/*   Updated: 2023/10/09 20:23:41 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _Name) : ClapTrap(_Name)
{
	std::cout << "FragTrap's Constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap's Default constructor called" << std::endl;
	Name = "Unknown";
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& og) : ClapTrap()
{
	std::cout << "FragTrap's Copy constructor called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
}

FragTrap& FragTrap::operator=(const FragTrap& og)
{
	std::cout << "FragTrap's Assignement operator called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests high fives" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's Destructor called" << std::endl;
}