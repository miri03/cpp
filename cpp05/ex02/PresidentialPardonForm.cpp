/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:54:41 by meharit           #+#    #+#             */
/*   Updated: 2023/11/27 22:21:01 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string _target) : AForm(_target, 25, 5)
{
	std::cout << "PresidentialPardonForm's Parameterized constructor called " << std::endl;
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm () : AForm("default", 25, 5)
{
	std::cout << "PresidentialPardonForm's Default constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& og) : AForm(og.target, og.get_grade_sign(), og.get_grade_exec())
{
	std::cout << "PresidentialPardonForm's Copy constructor called " << std::endl;
	target = og.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& og)
{
	std::cout << "PresidentialPardonForm's Assignment operator called" << std::endl;
	target = og.target;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm's Default destructor called" << std::endl;
}

std::string PresidentialPardonForm::get_target() const
{
	return (target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > get_grade_exec())
		throw AForm::GradeTooLowExceptionToExec();
	if (!get_sign())
		throw AForm::FormNotSigned();

	std::cout << get_target() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}