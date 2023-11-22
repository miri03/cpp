/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:17:10 by meharit           #+#    #+#             */
/*   Updated: 2023/11/20 21:18:26 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <cstdlib> 

class RobotomyRequestForm : public AForm
{
	private :
		std::string target;
	public:
		RobotomyRequestForm (std::string);
		//////canonical form///////////////
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& og);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& og);
		~RobotomyRequestForm();
		///////////////////////////////
		std::string	get_target() const ;

		void	execute(Bureaucrat const & executor) const;
};