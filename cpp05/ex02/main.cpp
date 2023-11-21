/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/20 21:23:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#define RESET "\x1b[0m"
#define RED "\x1b[31m"

int main()
{
	try
	{
		Bureaucrat b1("Wonka", 1);
		ShrubberyCreationForm t("Oompa Loompa");
		b1.signForm(t);

		ShrubberyCreationForm t1;
		t1 = t;
		std::cout << t << std::endl;
		std::cout << t1 << std::endl;
		// b1.signForm(t);
		// std::cout << t << std::endl;
		// std::cout << b1 << std::endl;
		// t.execute(b1);
		// b1.executeForm(t);
	}
	catch(std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << RESET << e.what() << std::endl;
	}
}
