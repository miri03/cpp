/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:23:06 by meharit           #+#    #+#             */
/*   Updated: 2023/09/10 19:57:53 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N > 0)
	{
		Zombie* zombieHorde = new Zombie[N];
		for(int i = 0; i < N; i++)
			zombieHorde[i].set_name(name);
			return (zombieHorde);
	}
	else
	{
		std::cout << "Enter a number superior to zero!" << std::endl;
		exit(0);
	}
	return (NULL);
}