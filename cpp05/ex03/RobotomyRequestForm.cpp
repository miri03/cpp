/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:17:13 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 15:36:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string _target) : AForm(_target, 72, 45)
{
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& og) : AForm(og.target, og.get_grade_sign(), og.get_grade_exec())
{
	target = og.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& og)
{
	target = og.target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::get_target() const
{
	return (target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > get_grade_exec())
		throw AForm::GradeTooLowExceptionToExec();
	if (!get_sign())
		throw AForm::FormNotSigned();

	std::cout << get_target() << " makes some drilling noises 'bzzzz'" << std::endl;
	std::srand(time(NULL));
	int random_variable = 1 + rand() % 2;
	if (random_variable == 1)
		std::cout << get_target() << " has been robotomized successfully." << std::endl;
	else if (random_variable == 2)
		std::cout << "The robotomy failed." << std::endl;
}
