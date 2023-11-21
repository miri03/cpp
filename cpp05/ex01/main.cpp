/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/18 18:54:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("av", 150);
		Form f1("div", 1, 150);
		Bureaucrat b2("av2", 11);

		std::cout << f1 << std::endl;
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		b2.signForm(f1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}