/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:17:13 by meharit           #+#    #+#             */
/*   Updated: 2023/11/27 22:21:27 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string _target) : AForm(_target, 72, 45)
{
	std::cout << "RobotomyRequestForm's Parameterized constructor called " << std::endl;
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45)
{
	std::cout << "RobotomyRequestForm's Default constructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& og) : AForm(og.target, og.get_grade_sign(), og.get_grade_exec())
{
	std::cout << "RobotomyRequestForm's Copy constructor called " << std::endl;
	target = og.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& og)
{
	std::cout << "RobotomyRequestForm's Assignment operator called" << std::endl;
	target = og.target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm's Default destructor called" << std::endl;
}


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
	std::srand(time(0));
	int random_variable = 1 + rand() % 2;
	if (random_variable == 1)
		std::cout << get_target() << " has been robotomized successfully." << std::endl;
	else if (random_variable == 2)
		std::cout << "The robotomy failed." << std::endl;
}