/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:33:59 by meharit           #+#    #+#             */
/*   Updated: 2023/10/07 20:11:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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