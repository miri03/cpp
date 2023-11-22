/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:54:41 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:01:38 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string _target) : AForm(_target, 25, 5)
{
	std::cout << "constructor presiden\n";
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm () : AForm("default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& og) : AForm(og.target, og.get_grade_sign(), og.get_grade_exec())
{
	target = og.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& og)
{
	target = og.target;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

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

PresidentialPardonForm* PresidentialPardonForm::create_obj()
{
	return(NULL);
}
