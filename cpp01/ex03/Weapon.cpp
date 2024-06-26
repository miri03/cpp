/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:44:22 by meharit           #+#    #+#             */
/*   Updated: 2023/09/17 15:11:59 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::Weapon()
{
	type = "Unknown";
}

void	Weapon::setType(std::string _new)
{
	type = _new;
}

const std::string&	Weapon::getType (void)
{
	return (type);
}
