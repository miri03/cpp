/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:28 by meharit           #+#    #+#             */
/*   Updated: 2023/10/07 17:53:05 by meharit          ###   ########.fr       */
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

		void	set_hit_p(int);
		void	set_attack_d(int a_d);
		void	set_energy_p(int e_p);
		
		void	get_info();




		// std::string	get_name();
		// int	get_hit_points();
		// int	get_attack_damage();
		// int	get_energy_points();
		
		
};

#endif