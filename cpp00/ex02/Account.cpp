/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:35:59 by meharit           #+#    #+#             */
/*   Updated: 2023/08/22 13:19:04 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>

Account::Account( int initial_deposit )
{
	Account::_amount = initial_deposit;
	std::cout << "index:" << Account::_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

static int	Account::getNbAccounts( void )
{
	_nbAccounts++;
	
}

// Account::~Account(void)
// {
// 	for (int i = 0; i < 8; i++)
// 	{
// 		std::cout << "index:" << i << ";amount:" << getNbAccounts() << ";closed" << std::endl;
// 	}
// }