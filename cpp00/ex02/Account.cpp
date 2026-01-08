/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaes-so <dpaes-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:30:16 by dpaes-so          #+#    #+#             */
/*   Updated: 2026/01/08 16:53:29 by dpaes-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp( void )
{
    time_t timestamp = time(&timestamp);
    struct tm datetime = *localtime(&timestamp);
    char output[50];

    std::cout << '[';
    strftime(output, 50, "%Y%m%d", &datetime);
    std::cout << output << "_";
    strftime(output, 50, "%H%M%S", &datetime);
    std::cout << output;
    std::cout << "] ";
}

Account::Account( int initial_deposit )
{
    Account::_displayTimestamp();
    this->_amount = initial_deposit;
    // print time
    this->_accountIndex = this->_nbAccounts;
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "created" << std::endl;
    this->_totalAmount+=this->_amount;
    _nbAccounts++;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';' ;
    std::cout << "amount:" << this->_amount << ';' ;
    std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ';' << "total:" << _totalAmount << ';' ;
    std::cout <<"deposits:" << _totalNbDeposits << ';' << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus( void ) const// dosent change the value just reads
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';' ;
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "deposits:" << this->_nbDeposits << ';';
    std::cout << "withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;

}

void Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';' ;
    std::cout << "p_amount:" << this->_amount << ';';
    std::cout << "deposit:" << deposit << ';';
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    this->_amount+= deposit;
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
    _totalAmount+=deposit;
}

bool Account::makeWithdrawal( int Withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';' ;
    std::cout << "p_amount:" << this->_amount << ';';
    if(this->_amount > Withdrawal)
    {
        std::cout << "withdrawal:" << Withdrawal << ';';
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        this->_amount-= Withdrawal;
        std::cout << "amount:" << this->_amount << ';';
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
        std::cout << std::endl;
        _totalAmount-=Withdrawal;
        return(true);
    }
    else
        std::cout << "withdrawal:refused";
    std::cout << std::endl;
    return(false);
}

    