/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:17:49 by meharit           #+#    #+#             */
/*   Updated: 2023/09/04 16:48:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name(void)
{
	return (name);
}

void Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string _name)
{
	name = _name;
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << get_name() << " destructed" << std::endl;
}
