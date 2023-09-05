/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:09:07 by meharit           #+#    #+#             */
/*   Updated: 2023/09/05 20:30:49 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::get_name()
{
	return (name);
}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout << get_name() << " has no weapon" << std::endl;
		return;
	}
	std::cout << get_name() << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

HumanB::HumanB(std::string _name)
{
	weapon = NULL;
	name = _name;
}