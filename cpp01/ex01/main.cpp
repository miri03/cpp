/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:36 by meharit           #+#    #+#             */
/*   Updated: 2023/09/04 17:01:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 2;
	
	Zombie *first_zombie = zombieHorde(N, "FOO");
	for (int i = 0; i < N ; i++)
		first_zombie[i].announce();
	delete[] first_zombie;
}