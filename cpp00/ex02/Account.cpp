/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:35:59 by meharit           #+#    #+#             */
/*   Updated: 2023/08/25 13:06:55 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
#include <ctime>
#include <cstddef>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

int Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount() ;
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:" ;
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	return (true);	
}

void	Account::_displayTimestamp( void)
{
	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900;
	
	if (timeinfo->tm_mon < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_mon + 1;
	
	if (timeinfo->tm_mday < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_mday;
	
	if (timeinfo->tm_hour < 10)
		std::cout << "0";	
	std::cout << "_" << timeinfo->tm_hour;
	
	if (timeinfo->tm_min < 10)
		std::cout << "0";	
	std::cout << timeinfo->tm_min;
	
	if (timeinfo->tm_sec < 10)
		std::cout << "0";	
	std::cout << timeinfo->tm_sec << "] ";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}
