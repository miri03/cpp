/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:10:27 by meharit           #+#    #+#             */
/*   Updated: 2023/11/17 21:54:23 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form //frm
{
	private:
		const std::string name;
		bool	sign;
		const int grade_sign;
		const int grade_excec;
	public:
	
		Form (std::string, int, int);
		//////canonical form///////////////
		Form();
		Form(const Form& og);
		Form& operator=(const Form& og);
		~Form();
		///////////////////////////////
		std::string get_name();
		bool		get_sign();
		int			get_grade_sign();
		int			get_grade_exec();
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
		//////////////////////////////////////
		void	beSigned(Bureaucrat);
};

std::ostream& operator<<(std::ostream& os, Form &frm);

#endif