/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:07 by meharit           #+#    #+#             */
/*   Updated: 2023/11/17 21:19:12 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150){}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og) : name(og.name)
{
	*this = og;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& og)
{
	// name = og.name; ///????
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
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement_grade()
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bur)
{
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return (os);
}

Bureaucrat::~Bureaucrat(){}

void	Bureaucrat::signForm(Form frm)
{
	if (frm.get_sign() == true)
		std::cout << getName() << " signed " << frm.get_name();
	else
		std::cout << getName() << " couldn't sign " << frm.get_name() << " because grade too Low\n";
		
}
