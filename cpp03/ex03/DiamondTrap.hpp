/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:22:51 by meharit           #+#    #+#             */
/*   Updated: 2023/10/09 16:50:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string Name;
	public:
		DiamondTrap(std::string _Name);
		DiamondTrap();
		// DiamondTrap(const DiamondTrap& og);
		// DiamondTrap& operator=(const DiamondTrap& og);
		~DiamondTrap();
		void	attack(const std::string& target);
};

#endif