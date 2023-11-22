/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:10:33 by meharit           #+#    #+#             */
/*   Updated: 2023/11/21 16:25:49 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I would't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*karen[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int j = 0; j < 4; j++)
	{
		if (levels[j] == level)
		{
			(this->*karen[j])();
			return;
		}
	}
	std::cout << "Harl is talking nonsense" << std::endl;
}
