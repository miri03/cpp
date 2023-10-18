/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:24:54 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/18 19:58:11 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	// /////////////CLONE TEST////////////////
    // Cure *cure = new Cure;
	// AMateria *nw = cure->clone();
	// std::cout << nw->getType() << std::endl;
	// delete cure;
	// delete nw;
	// std::cout << "///////////////////////////////////////" << std::endl;

	// /////////////USE TEST//////////////////
	// Ice *ice = new Ice;
	// Character t("Tommy");
	// ice->use(t);
	// delete(ice);
	// std::cout << "///////////////////////////////////////" << std::endl;
	
	/////////////EQUIP TEST//////////////////
	Ice *ice = new Ice;
	// Cure *cure = new Cure;
	Character t("Tommy");

	ICharacter* test = new Character;
	for (int i = 0; i < 4; i++)
		test->equip(ice);
	test->use(3, t);
	test->equip(ice);
	test->unequip(2);
	// test->equip(cure);
	test->use(2, t);
	
	delete(ice);
	delete(test);
	system("leaks Materia");
}
