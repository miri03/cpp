/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:33:56 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

#define RESET "\x1b[0m"
#define RED "\x1b[31m"

int main()
{
	try
	{
		Bureaucrat sup("supervisor", 10);
		Intern halima;
		AForm* files;
		files = halima.makeForm("robotomy request", "photocopie");

		files->beSigned(sup);
		files->execute(sup);
	}
	catch(std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << RESET << e.what() << std::endl;
	}
}

//inheritance 
//polymorphisme
//exception
//virtual functions
