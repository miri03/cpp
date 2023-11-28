/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:09 by meharit           #+#    #+#             */
/*   Updated: 2023/11/27 21:46:17 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(const std::string, int);
		//////canonical form///////////////
		Bureaucrat();
		Bureaucrat(const Bureaucrat& og);
		Bureaucrat& operator=(const Bureaucrat& og);
		~Bureaucrat();
		/////////////////////////////////////
		std::string	getName();
		int			getGrade();
		//////////////////////////////////////
		void increment_grade();
		void decrement_grade();
		////////Exception classes///////////////
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		/////////////////////////////////////////////
		void	signForm(Form&);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &bur);

#endif