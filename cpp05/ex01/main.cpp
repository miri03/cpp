/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 16:24:12 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#define RESET "\x1b[0m"
#define RED "\x1b[31m"

int main()
{
	try
	{
		Bureaucrat b1("secretary", 20);
		Form f1("birth certificate", 20, 150);
		Bureaucrat b2("av2", 11);
		std::cout << "---------------------------" << std::endl;
		std::cout << f1 << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << b1 << std::endl;
		std::cout << "---------------------------" << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		std::cout << "---------------------------" << std::endl;
		b2.signForm(f1);
	}
	catch(std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << RESET << e.what() << std::endl;
	}
}