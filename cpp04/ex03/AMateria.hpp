/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:49:12 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 21:09:16 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria             //base class of ice and cure
{
	protected:
		std::string type;
	// [...]
	public:
		AMateria(std::string const & type);

		AMateria();
		AMateria(const AMateria& og);
		AMateria& operator=(const AMateria& og);
		~AMateria();
		
		// [...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif