/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:23:06 by meharit           #+#    #+#             */
/*   Updated: 2023/09/04 16:44:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombieHorde = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombieHorde[i].set_name(name);
	return (zombieHorde);
}