/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:31 by meharit           #+#    #+#             */
/*   Updated: 2023/10/06 17:13:46 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1("jonny");
	ClapTrap p2("tony");

	p1.attack("tonny");

	p1.get_info();

	p1.beRepaired(50);

	p1.get_info();

	p1.takeDamage(70);

	p1.get_info();

	p1.takeDamage(70);

	p1.get_info();

	p1.beRepaired(50);
	
	p1.get_info();
}