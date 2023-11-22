/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:21:27 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:28:45 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& og)
{
	(void) og;
}

Intern& Intern::operator=(const Intern& og)
{
	(void) og;
	return (*this);
}

Intern::~Intern(){}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	int i = 0;
	while (i < 3 && form != forms[i])
		i++;
	if (i == 3)
		std::cout << "Intern can't create the form " << form << " because it does not exist" << std::endl;
	else
		std::cout << "Intern creates " << form << std::endl;
	switch(i)
	{
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);			
	}
	return NULL;
}
