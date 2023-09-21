/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:10:16 by meharit           #+#    #+#             */
/*   Updated: 2023/09/15 22:05:32 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		weapon;
		std::string	name;
		
	public:
		void	attack();
		std::string get_name();
		HumanA(std::string _name, Weapon& _weapon);
};

#endif