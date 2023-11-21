/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:10:29 by meharit           #+#    #+#             */
/*   Updated: 2023/11/20 13:42:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), grade_sign(150), grade_exec(150){}

Form::Form(const Form& og) : name(og.name), grade_sign(og.grade_sign), grade_exec(og.grade_exec)
{
	*this = og;
}

Form& Form::operator=(const Form& og)
{
	sign = og.sign;
	return (*this);
}

Form::~Form() {}

Form::Form(std::string _name, int sign, int exec): name(_name), sign(false), grade_sign(sign), grade_exec(exec)
{
	if (sign < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150)
		throw Form::GradeTooLowException();
	if (exec < 1)
		throw Form::GradeTooHighException();
	else if (exec > 150)
		throw Form::GradeTooLowException();
}

std::string Form::get_name()
{
	return (name);
}

bool			Form::get_sign()
{
	return (sign);
}

int			Form::get_grade_sign()
{
	return (grade_sign);
}

int			Form::get_grade_exec()
{
	return (grade_exec);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLow";
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > get_grade_sign())
		throw Form::GradeTooLowException();
	sign = true;
}

std::ostream& operator<<(std::ostream& os, Form &frm)
{
	os << "Name : " << frm.get_name() << std::endl;
	os << "Grade required to execute it " << frm.get_grade_exec() << std::endl;;
	os << "Grade required to sign it " << frm.get_grade_sign() << std::endl;;
	if (frm.get_sign())
		os << "Form is signed";
	else
		os << "Form is not signed";
	return (os);
}
