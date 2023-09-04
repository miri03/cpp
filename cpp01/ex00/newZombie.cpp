/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:22:54 by meharit           #+#    #+#             */
/*   Updated: 2023/09/04 16:09:52 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie* new_Zombie;
	
	new_Zombie = new Zombie(name);

	return (new_Zombie);
}

void	randomChump( std::string name )
{
	Zombie	new_Zombie(name);
	
	new_Zombie.announce();
}
