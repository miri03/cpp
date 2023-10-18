/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:13:05 by meharit           #+#    #+#             */
/*   Updated: 2023/10/18 19:46:12 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class AMateria; //why?

class ICharacter            //base class of Character  //abstract class
{
	public:
		ICharacter();
		ICharacter(const ICharacter& og);
		ICharacter& operator=(const ICharacter& og);
		virtual ~ICharacter();
				
		virtual std::string const & getName() const = 0;
		
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif