/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 17:09:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#define RESET "\x1b[0m"
#define RED "\x1b[31m"


void test1()
{
	ShrubberyCreationForm form1("The Green Garden");
	Bureaucrat Bob("Bob" , 130);
	Bureaucrat Akira("Akira" , 140);
	std::cout << std::endl;
	std::cout << Bob << std::endl;
	std::cout << Akira << std::endl;
	std::cout << form1 << std::endl;
	
	Bob.signForm(form1);
	Akira.signForm(form1);
	Akira.executeForm(form1);
	Bob.executeForm(form1);
	std::cout << std::endl;
}

void	test2()
{
	RobotomyRequestForm form1("WALL-E");
	Bureaucrat Rick("Rick" , 1);
	Bureaucrat Morty("Morty" , 130);
	Bureaucrat Summer("Summer", 40);
	
	std::cout << form1 << std::endl;
	std::cout << Rick << std::endl;
	std::cout << Summer << std::endl;
	std::cout << Morty << std::endl;
	std::cout << std::endl;
	
	Morty.signForm(form1);
	Rick.signForm(form1);
	Morty.executeForm(form1);
	Rick.executeForm(form1);
	Summer.executeForm(form1);
}

int main(void)
{
	try
	{
		test1();
		std::cout << "***********test 1 done***********" << std::endl;
		test2();
		std::cout << "***********test 2 done***********" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << RESET << e.what() << std::endl;
	}
}
