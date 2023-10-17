/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:38:33 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 20:55:46 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string name;
	public:
		Character(std::string);
		Character();
		// Character(const Character& og);
		// Character& operator=(const Character& og);
		~Character();
		std::string const & getName() const;
		
};

#endif