/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:07 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 16:23:44 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150)
{
	std::cout << "Bureaucrat's Default constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
	std::cout << "Bureaucrat's Parameterized constructor called " << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& og) : name(og.name)
{
	std::cout << "Bureaucrat's Copy constructor called " << std::endl;
	*this = og;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& og)
{
	std::cout << "Bureaucrat's Assignment operator called" << std::endl;
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

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat's Default destructor called" << std::endl;
}

void	Bureaucrat::signForm(Form &frm)
{
	if (!frm.get_sign() && getGrade() <= frm.get_grade_sign())
	{
		std::cout << "Bureaucrat " << getName() << " signed the form " << frm.get_name() << std::endl;
		frm.beSigned(*this);
	}
	else
	{
		std::cout << "Bureaucrat " << getName() << " couldn't sign the form " << frm.get_name();
		if (frm.get_sign() == true)
			std::cout << " because it's signed" << std::endl;
		else if (getGrade() > frm.get_grade_sign())
			std::cout << " because grade too low" << std::endl;
	}
}
