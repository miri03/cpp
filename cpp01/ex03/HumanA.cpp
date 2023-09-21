/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:03:01 by meharit           #+#    #+#             */
/*   Updated: 2023/09/17 15:06:04 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon) : weapon(_weapon)
{
	name = _name;
}

std::string HumanA::get_name()
{
	return (name);
}

void	HumanA::attack()
{
	std::cout << get_name() << " attacks with their " << weapon.getType() << std::endl;
}