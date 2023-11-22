/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:36:50 by meharit           #+#    #+#             */
/*   Updated: 2023/11/20 18:08:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), sign(false), grade_sign(150), grade_exec(150){}

AForm::AForm(const AForm& og) : name(og.name), grade_sign(og.grade_sign), grade_exec(og.grade_exec)
{
	*this = og;
}

AForm& AForm::operator=(const AForm& og)
{
	sign = og.sign;
	return (*this);
}

AForm::~AForm() {}

AForm::AForm(std::string _name, int sign, int exec): name(_name), sign(false), grade_sign(sign), grade_exec(exec)
{
	if (sign < 1)
		throw AForm::GradeTooHighException();
	else if (sign > 150)
		throw AForm::GradeTooLowException();
	if (exec < 1)
		throw AForm::GradeTooHighException();
	else if (exec > 150)
		throw AForm::GradeTooLowException();
}

std::string AForm::get_name ()const
{
	return (name);
}

bool			AForm::get_sign()const
{
	return (sign);
}

int			AForm::get_grade_sign()const
{
	return (grade_sign);
}

int			AForm::get_grade_exec()const
{
	return (grade_exec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "GradeTooLow";
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "FormNotSigned";
}

const char* AForm::GradeTooLowExceptionToExec::what() const throw()
{
	return "GradeTooLow To Excecute";
}

void	AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > get_grade_sign())
		throw AForm::GradeTooLowException();
	sign = true;
}

std::ostream& operator<<(std::ostream& os, AForm &frm)
{
	os << "---------------------------------" << std::endl;
	os << "Name : " << frm.get_name() << std::endl;
	os << "Grade required to execute it " << frm.get_grade_exec() << std::endl;;
	os << "Grade required to sign it " << frm.get_grade_sign() << std::endl;;
	if (frm.get_sign())
		os << "Form is signed" << std::endl;
	else
		os << "Form is not signed" << std::endl;
	os << "---------------------------------";
	return (os);
}
