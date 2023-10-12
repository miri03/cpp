/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:31 by meharit           #+#    #+#             */
/*   Updated: 2023/10/10 14:00:35 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap p("Tonny");
	ScavTrap p1("Jonny");

	ScavTrap tt;

	p1.attack("someone");
	p1.takeDamage(100);
	p.takeDamage(20);
	p1.guardGate();	
	p1.takeDamage(1);
}