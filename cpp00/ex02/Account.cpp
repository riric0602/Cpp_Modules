/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:29:48 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/27 20:31:47 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* Default Constructor */
Account::Account()
{
	_displayTimestamp();
	std::cout << " index" << _nbAccounts << ";amount:0;created" << std::endl;
	_nbAccounts++;
}

/* Constructor */
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
	/* Personal Account Information */
	_accountIndex = _nbAccounts;
	_amount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	/* Global Account Information */
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

/* Destructor */
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

/* Public Functions */
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = _amount;
	/* Personal Information */
	_nbDeposits++;
	_amount += deposit;
	/* Global Information */
	_totalNbDeposits++;
	_totalAmount += deposit;
	/* Display */
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int			p_amount;
	
	p_amount = _amount;
	if (p_amount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	/* Personal Information */
	_nbWithdrawals++;
	_amount -= withdrawal;
	/* Global Information */
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	/* Display */
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

/* PRIVATE FUNCTIONS */
void	Account::_displayTimestamp(void)
{
	std::time_t	currentTime;
	std::tm		*localTime;
	char		buffer[80];
	const char	*format = "%Y%m%d_%H%M%S";

	currentTime = std::time(NULL);
	localTime = std::localtime(&currentTime);
	std::strftime(buffer, sizeof(buffer), format, localTime);
	std::cout << "[" << buffer << "]";
}
