/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:09 by meharit           #+#    #+#             */
/*   Updated: 2023/11/16 19:50:18 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	name;
		int			grade;
	public:
		Bureaucrat(const std::string, int);

		Bureaucrat();
		Bureaucrat(const Bureaucrat& og);
		Bureaucrat& operator=(const Bureaucrat& og);
		~Bureaucrat();
		
		std::string	getName();
		int	getGrade();
		
		void increment_grade();
		void decrement_grade();

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "GradeTooHigh";
			}
		};
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "GradeTooLow";
			}
		};
		
		class IncremDecremExeption : public std::exception
		{
			//constructor
			virtual const char* what() const throw()
			{
				return "The grade is out of range";
			}	
		};
};

//catch() without args

#endif