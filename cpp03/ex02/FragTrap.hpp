/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:46:06 by meharit           #+#    #+#             */
/*   Updated: 2023/10/08 15:18:27 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string);
		
		FragTrap();
		FragTrap(const FragTrap& og);
		FragTrap& operator=(const FragTrap& og);
		~FragTrap();
		
		void highFivesGuys(void);
};

#endif