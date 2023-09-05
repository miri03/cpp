/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:47:24 by meharit           #+#    #+#             */
/*   Updated: 2023/09/05 21:39:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string type;
	public:
		Weapon(std::string type);
		Weapon();
		void				setType(std::string _new);
		const std::string&	getType (void);
		
};

#endif