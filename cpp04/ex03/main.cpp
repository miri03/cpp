/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:24:54 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/20 00:23:42 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	test()
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
	
	
	// Cure *cure = new Cure;
	// Character t("Tommy");
	// ICharacter* test = new Character;
	// test->equip(cure);
	// test->use(0, t);
	// AMateria* floor = cure;
	// test->unequip(0);
	// test->use(0, *test);
	
	// delete(test);
	// delete floor;
	////////////DEEP COPY////////////////////
	// Character test("you");
	// Ice *ice = new Ice;
	// test.equip(ice);
	// Character t;
	// t = test;
	// t.use(0, t);	
	
	////////////////////////////////////////
	
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // Character* me = new Character("meh");
    // AMateria* tmp = NULL;
	// std::cout << "            ----          |" << std::endl;
    // tmp = src->createMateria("test");
    // me->equip(tmp);
	// delete tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // ICharacter* enemy = new Character("enemy");
    // me->use(0, *enemy);
    // me->use(1, *enemy);
    // AMateria *itemIntheFoor = tmp;
	// std::cout << "tmp ==" << tmp << std::endl;
    // std::cout << "*********************\n";
    // me->unequip(1);
	// me->use(1, *enemy);
	// me->use(0, *enemy);
    // delete enemy;
    // delete me;
    // delete src;
    // if (itemIntheFoor)
    //     delete itemIntheFoor;
	
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// // AMateria* tmp;
	// // tmp = src->createMateria("ice");
	// // me->equip(tmp);
	// // tmp = src->createMateria("cure");
	// // me->equip(tmp);
	// ICharacter* bob = new Character("bob");

	// // me->use(0, *bob);
	// // me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	MateriaSource *test = new MateriaSource();
	test->learnMateria(test->createMateria("ice"));
	AMateria *tmp = new Ice();
	
	test->learnMateria(tmp);
	tmp = new Cure();
	test->learnMateria(tmp);
	std::cout << "test" << std::endl;
	MateriaSource g;
	AMateria *dd = new Ice();
	g.learnMateria(dd);
	g = *test;
	std::cout << "-----------------------------" << std::endl;
	delete test;
	// test = test;
}

int main()
{
	test();
	std::cout << "checking leaks" << std::endl;
	system("leaks Materia");
	////////////////////////////////////////
}
