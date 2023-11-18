/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/18 15:06:34 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("av", 11);
		Form f1("div", 10, 110);
		std::cout << f1 << std::endl;
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		b1.signForm(f1);

	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}