/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:21:29 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:27:49 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	
		//////canonical form///////////////
		Intern();
		Intern(const Intern& og);
		Intern& operator=(const Intern& og);
		~Intern();
		////////////////////////////////
		
		AForm* makeForm(std::string form, std::string target);
};