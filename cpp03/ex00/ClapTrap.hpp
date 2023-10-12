/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:28 by meharit           #+#    #+#             */
/*   Updated: 2023/10/10 13:54:54 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	
	private:
		std::string Name;
		int			Hit_points;
		int			Energy_points;
		int			Attack_damage;
	
	public:
		ClapTrap(std::string _Name);
		ClapTrap();
		ClapTrap(const ClapTrap& og);
		ClapTrap& operator=(const ClapTrap& og);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		void	get_info();		
};

#endif