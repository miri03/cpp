/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:40:47 by meharit           #+#    #+#             */
/*   Updated: 2023/11/17 17:05:27 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}