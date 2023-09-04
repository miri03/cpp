/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:51:51 by meharit           #+#    #+#             */
/*   Updated: 2023/09/04 14:27:38 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	std::string name;
	
	public:
		void 		announce(void);
		std::string	get_name(void);
		Zombie(std::string _name);
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif