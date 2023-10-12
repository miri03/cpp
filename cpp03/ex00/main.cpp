/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:31 by meharit           #+#    #+#             */
/*   Updated: 2023/10/12 18:01:14 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1("jonny");
	ClapTrap p2;

	p1.attack("you");

	p1.beRepaired(50);

	p1.takeDamage(70);

	p1.takeDamage(70);

	p1.beRepaired(50);

	p2.attack("someone");
	

}