/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:31 by meharit           #+#    #+#             */
/*   Updated: 2023/10/09 20:12:17 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d("Tomas");
	// ScavTrap p;
	
	// p.attack("you");
	d.attack("you");
	
	
	// d.ClapTrap::get_info();
	// ClapTrap p("Tonny");
	// ScavTrap p1("Jonny");
	// FragTrap p3("Tim");

	// p3.attack("a cat");
	// p3.highFivesGuys();
	// p1.attack("someone");
	// p1.takeDamage(100);
	// p.takeDamage(20);
	// p1.guardGate();	
	// p1.takeDamage(1);
}