/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:35:23 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:29:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
class Bureaucrat;

class AForm  //virtual destr ??
{
	private:
		const std::string	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exec;
	public:
	
		AForm (std::string, int sign, int exec);
		//////canonical form///////////////
		AForm();
		AForm(const AForm& og);
		AForm& operator=(const AForm& og);
		~AForm();
		///////////////////////////////
		std::string get_name() const;
		bool		get_sign() const;
		int			get_grade_sign() const;
		int			get_grade_exec() const;
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
		class FormNotSigned: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowExceptionToExec: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		//////////////////////////////////////
		void			beSigned(Bureaucrat&);
		virtual void	execute(Bureaucrat const & executor) const=0;

};

std::ostream& operator<<(std::ostream& os, AForm &frm);

#endif