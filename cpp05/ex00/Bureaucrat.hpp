/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:09 by meharit           #+#    #+#             */
/*   Updated: 2023/11/15 22:12:58 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int			grade;
	public:
		Bureaucrat(const std::string, int);

		Bureaucrat();
		Bureaucrat(Bureaucrat& const og);
		Bureaucrat& operator=(Bureaucrat& const og);
		~Bureaucrat();
		
		std::string	getName();
		int	getGrade();
		
		void increment_grade();
		void decrement_grade();
};


//catch() without args
//does it continue after throw

#endif