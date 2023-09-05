/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:14:58 by meharit           #+#    #+#             */
/*   Updated: 2023/09/05 21:40:17 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		weapon;
		std::string	name;
		
	public:
		HumanB(std::string _name);
		void	attack();
		std::string get_name();
		void setWeapon(Weapon	&weapon);
};

#endif