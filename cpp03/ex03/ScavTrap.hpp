/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:33:59 by meharit           #+#    #+#             */
/*   Updated: 2023/10/09 16:34:00 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string);
		
		ScavTrap();
		ScavTrap(const ScavTrap& og);
		ScavTrap& operator=(const ScavTrap& og);
		~ScavTrap();
		
		void attack(const std::string& target);
		void guardGate();
};

#endif