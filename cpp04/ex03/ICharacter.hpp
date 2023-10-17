/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:13:05 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 17:11:29 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class ICharacter
{
	private:
		std::string name;
	public:
		ICharacter(std::string);
		ICharacter();
		// ICharacter(const ICharacter& og);
		// ICharacter& operator=(const ICharacter& og); //deep copy
		virtual ~ICharacter() {}
		
		virtual std::string const & getName() const = 0;
		// virtual void equip(AMateria* m) = 0;
		// virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif