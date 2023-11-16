/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:07 by meharit           #+#    #+#             */
/*   Updated: 2023/11/16 19:24:20 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string _name, int _grade)
{
	(void) _name;
	// name = _name;
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og)
{
	*this = og;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& og)
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
