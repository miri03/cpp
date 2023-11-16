/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:07 by meharit           #+#    #+#             */
/*   Updated: 2023/11/15 13:26:53 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string _name, int _grade)
{
	// name = _name;
	
	if (grade < 1 || grade > 150)
		std::cout << "exeption" << std::endl;
		// exeption
	else
		grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& const og)
{
	*this = og;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& const og)
{
	grade = og.grade;
	return (*this);
}

std::string	Bureaucrat::getName()
{
	return (name);
}

int	Bureaucrat::getGrade()
{
	return (grade);
}

void Bureaucrat::increment_grade()
{
	grade--;
	if (grade < 1)
		std::cout << "exeption" << std::endl;
		// exeption
}

void Bureaucrat::decrement_grade()
{
	grade++;
	if (grade > 150)
		std::cout << "exeption" << std::endl;
		// exeption
}

Bureaucrat::~Bureaucrat(){}
