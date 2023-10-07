/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:25 by meharit           #+#    #+#             */
/*   Updated: 2023/10/07 17:53:13 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap's Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _Name)
{
	std::cout << "ClapTrap's Constructor called" << std::endl;
	Name = _Name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& og)
{
	std::cout << "ClapTrap's Copy constructor called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& og)
{
	std::cout << "ClapTrap's Assignement operator called" << std::endl;
	Name = og.Name;
	Hit_points = og.Hit_points;
	Attack_damage = og.Attack_damage;
	Energy_points = og.Energy_points;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (Energy_points == 0)
	{
		std::cout << "ClapTrap " << Name << " can't attack, no energy points!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name <<  " attacks " << target;
	std::cout << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{	
	if (Hit_points <= 0)
	{
		std::cout << "ClapTrap " << Name << " don't have any hit points left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name <<  " took damage ";
	std::cout << ", causing " << amount << " points of damage!" << std::endl;
	Hit_points -= amount;
	if (Hit_points < 0)
		Hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points == 0)
	{
		std::cout << "ClapTrap " << Name << " can't attack, no energy points!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name <<  " got repaired ";
	std::cout << ", and got " << amount << " additional hit points!" << std::endl;
	Hit_points += amount;
	Energy_points -= 1;
}

void	ClapTrap::set_hit_p(int h_p)
{
	Hit_points = h_p;
}

void	ClapTrap::set_attack_d(int a_d)
{
	Attack_damage = a_d;
}

void	ClapTrap::set_energy_p(int e_p)
{
	Energy_points = e_p;
}

void	ClapTrap::get_info()
{
	std::cout << "ClapTrap [" << Name << "] Hit points= (" << Hit_points;
	std::cout << ") Energy points= (" << Energy_points << ")" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor called" << std::endl;
}









// std::string ClapTrap::get_name()
// {
// 	return (Name);
// }

// int	ClapTrap::get_hit_points()
// {
// 	return (Hit_points);
// }

// int	ClapTrap::get_attack_damage()
// {
// 	return (Attack_damage);
// }

// int	ClapTrap::get_energy_points()
// {
// 	return (Energy_points);
// }




