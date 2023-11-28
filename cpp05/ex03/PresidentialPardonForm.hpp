/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:52:49 by meharit           #+#    #+#             */
/*   Updated: 2023/11/28 18:05:51 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm (std::string);
		//////canonical form///////////////
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& og);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& og);
		~PresidentialPardonForm();
		/////////////////////////////////////		
		std::string	get_target() const ;

		void	execute(Bureaucrat const & executor) const;
};
