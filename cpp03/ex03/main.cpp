/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:31 by meharit           #+#    #+#             */
/*   Updated: 2023/10/12 19:06:58 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d("Tom");

	d.whoAmI();
	d.attack("you");
	d.highFivesGuys();
	d.guardGate();
	d.takeDamage(50);
	d.beRepaired(1);
}