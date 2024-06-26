/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:26:05 by meharit           #+#    #+#             */
/*   Updated: 2023/11/27 22:24:46 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define GREEN "\x1b[32m"


ShrubberyCreationForm::ShrubberyCreationForm (std::string _target) : AForm(_target, 145, 137)
{
	std::cout << "ShrubberyCreationForm's Parameterized constructor called " << std::endl;
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm () : AForm("Default", 145, 137)
{
	std::cout << "ShrubberyCreationForm's Default constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& og) : AForm(og.target, og.get_grade_sign(), og.get_grade_exec())
{
	std::cout << "ShrubberyCreationForm's Copy constructor called " << std::endl;
	target = og.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& og)
{
	std::cout << "ShrubberyCreationForm's Assignment operator called" << std::endl;
	target = og.target;
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm's Default destructor called" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const
{
	return (target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > get_grade_exec())
		throw AForm::GradeTooLowExceptionToExec();
	if (!get_sign())
		throw AForm::FormNotSigned(); 
	std::ofstream	ofs;
	std::string filename = get_target() + "_shrubbery";
	ofs.open(filename.c_str(), std::ofstream::out);
	if (!ofs)
	{
		perror(filename.c_str());
		return;
	}
	ofs << GREEN << "               ,@@@@@@@,\n";
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n" ;
	ofs << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	ofs << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	ofs << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	ofs << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	ofs << "    `&%\\ ` /%&'    |.|        \\ '|8'\n";
	ofs << "        |o|        | |         | |\n";
	ofs << "        |.|        | |         | |\n";
	ofs << "     \\_/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\n";

	ofs << "\n        _-_\n";
	ofs << "     /~~   ~~\\ \n";
	ofs << "  /~~         ~~\\ \n";
	ofs << " {               } \n";
	ofs << "  \\  _-     -_  / \n";
	ofs << "    ~  \\ //  ~ \n";
	ofs << " _- -   | | _- _ \n";
	ofs << "   _ -  | |   -_ \n";
	ofs << "       // \\ \n";
}