/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:49 by meharit           #+#    #+#             */
/*   Updated: 2023/09/10 19:34:51 by meharit          ###   ########.fr       */
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
		void		set_name(std::string _name);

		Zombie();
		~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );

#endif