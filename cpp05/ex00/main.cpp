/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/27 21:43:51 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RESET "\x1b[0m"
#define RED "\x1b[31m"

int main()
{
    try
    {
        Bureaucrat first("miri", 1);
		Bureaucrat second;
		second = first;
		std::cout << first << std::endl;
		std::cout << second << std::endl;
        first.increment_grade();
    }
	
    catch(std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << RESET << e.what() << std::endl;
	}
}