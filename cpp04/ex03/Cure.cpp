/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:01:50 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 03:15:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure's Default constructor called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& og)
{
	std::cout << "Cure's Copy constructor called" << std::endl;
	*this = og;
}

Cure& Cure::operator=(const Cure& og)
{
	std::cout << "Cure's Assignement operator called"  << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure's Destructor called" << std::endl;
}