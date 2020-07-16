/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_nbAccounts += 1;
    this->_totalAmount += initial_deposit;
    
    _amount = initial_deposit;
    _accountIndex = this->_nbAccounts - 1;
    
    _displayTimestamp();
    std::cout << GREEN
    << "index:" << _accountIndex 
    << ";amount:" << _amount 
    << ";created" << RESET << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << RED
    << "index:" << _accountIndex 
    << ";amount:" << _amount 
    << ";closed" << RESET << std::endl;
}

int     Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int     Account::getTotalAmount( void )
{
    return _totalAmount;
}

int     Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
	time_t	timev = time(&timev);
	struct tm *stamp = localtime(&timev);

    std::cout << "[";
	std::cout << (1900 + stamp->tm_year);
	if (stamp->tm_mon >= 9)
		std::cout << (stamp->tm_mon + 1);
	else
		std::cout << "0" << (stamp->tm_mon + 1);
	if (stamp->tm_mday > 9)
		std::cout << stamp->tm_mday;
	else
		std::cout << "0" << (stamp->tm_mday);
	if (stamp->tm_hour > 9)
		std::cout << "_" << stamp->tm_hour;
	else
		std::cout << "_0" << stamp->tm_hour;
	if (stamp->tm_min > 9)
		std::cout << stamp->tm_min;
	else
		std::cout << "0" << stamp->tm_min;
	if (stamp->tm_sec > 9)
		std::cout << stamp->tm_sec;
	else
		std::cout << "0" << stamp->tm_sec;
    std::cout << "] ";
	return ;
}

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << CYAN
    << "accounts:" << _nbAccounts 
    << ";total:" << _totalAmount 
    << ";deposits:" << _totalNbDeposits 
    << ";withdrawals:"<< _totalNbWithdrawals << RESET << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex 
    << ";amount:" << _amount 
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_totalNbDeposits += 1;
    this->_totalAmount += deposit;
    this->_nbDeposits += 1;
    this->_amount += deposit;

    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex 
    << ";p_amount:" << _amount  - deposit
    << ";deposit:" << deposit
    << ";amount:" << _amount 
    << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout
    << "index:" << _accountIndex 
    << ";p_amount:" << _amount
    << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << MAGENTA << "refused" << RESET << std::endl;
        return (1);
    }

    this->_totalNbWithdrawals += 1;
    this->_nbWithdrawals += 1;
    this->_totalAmount -= withdrawal;
    this->_amount -= withdrawal;

    std::cout << withdrawal
    << ";amount:" << _amount 
    << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (0);
}