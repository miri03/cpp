/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:17:53 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 12:47:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm (std::string);
		//////canonical form///////////////
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& og);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& og);
		~ShrubberyCreationForm();
		/////////////////////////////////////		
		std::string	get_target() const ;

		void	execute(Bureaucrat const & executor) const;

};

#endif