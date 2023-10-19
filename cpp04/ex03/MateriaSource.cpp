/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:28:52 by meharit           #+#    #+#             */
/*   Updated: 2023/10/20 00:21:48 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource's Default constructor called" << std::endl;	
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& og)
{
	std::cout << "MateriaSource's Copy constructor called" << std::endl;	
	for (int i = 0; i < 4; i++)
	{
		if (!og.materia[i])
			materia[i] = NULL;
		else
			materia[i] = (og.materia[i]->clone());
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& og)
{
	std::cout << "MateriaSource's Assignement operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!og.materia[i])
			materia[i] = NULL;
		else
		{
			delete materia[i];
			materia[i] = (og.materia[i]->clone());
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] == NULL)
		{
			materia[i] = m;
			return;			
		}
	}
	std::cout << "inventory full\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice" || type == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
			{
				if (type == materia[i]->getType())
					return (materia[i]->clone());
			}
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource's Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete materia[i];
}