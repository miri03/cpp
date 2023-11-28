/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 18:40:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

void test1()
{
	Intern	halima;
	AForm *files = (halima.makeForm("robotomy request", "photocopie"));

	Bureaucrat sup("supervisor" , 1);
	Bureaucrat Akira("Akira" , 140);
	std::cout << std::endl;
	std::cout << sup << std::endl;
	std::cout << Akira << std::endl;
	std::cout << *files << std::endl;
	
	sup.signForm(*files);
	Akira.signForm(*files);
	Akira.executeForm(*files);
	sup.executeForm(*files);
	std::cout << std::endl;
	delete files;
}

void	test2()
{
	Intern	atika;
	AForm *files = (atika.makeForm("shrubbery creation", "Trees"));
	if (!files)
		return ;
	Bureaucrat Rick("Rick" , 5);
	Bureaucrat Morty("Morty" , 130);
	Bureaucrat Summer("Summer", 40);
	std::cout << std::endl;
	std::cout << Rick << std::endl;
	std::cout << Morty << std::endl;
	std::cout << Summer << std::endl;
	std::cout << *files << std::endl;

	Morty.signForm(*files);
	Rick.signForm(*files);
	Morty.executeForm(*files);
	Rick.executeForm(*files);
	Summer.signForm(*files);
	std::cout << std::endl;
	delete files;
}

int main(void)
{
	try
	{
		test1();
		std::cout << "***********test 1 done***********" << std::endl;
		// test2();
		// std::cout << "***********test 2 done***********" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}