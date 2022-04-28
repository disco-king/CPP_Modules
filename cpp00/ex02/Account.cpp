#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

char get_zero(int num){

	return (num < 10 ? '0' : '\0');
}

void Account::_displayTimestamp(void){
	
	time_t now = time(0);
	struct tm * ti;
	
	ti = localtime(&now);
	std::cout << '[';
	std::cout << get_zero(ti->tm_year) << ti->tm_year + 1900;
	std::cout << get_zero(ti->tm_mon) << ti->tm_mon;
	std::cout << get_zero(ti->tm_mday) << ti->tm_mday;
	std::cout << '_';
	std::cout << get_zero(ti->tm_hour) << ti->tm_hour;
	std::cout << get_zero(ti->tm_min) << ti->tm_min;
	std::cout << get_zero(ti->tm_sec) << ti->tm_sec;
	std::cout << ']';
}

Account::Account(int dep) {

	this->_accountIndex = Account::_nbAccounts;
	this->_amount = dep;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts++;
	this->_totalAmount += dep;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void) {

	this->_nbAccounts--;

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

void Account::displayAccountsInfos(){

	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::displayStatus( void ) const{

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit){

	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << (this->_amount += deposit);
	std::cout << ";nb_deposits:" << (this->_nbDeposits += 1);
	std::cout << std::endl;
}

int Account::checkAmount( void ) const{

	return this->_amount;
}

bool Account::makeWithdrawal(int withdrawal){

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if(this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return true;
	}
	std::cout << withdrawal;
	std::cout << ";amount:" << (this->_amount -= withdrawal);
	std::cout << ";nb_withdrawals:" << (this->_nbWithdrawals += 1);
	std::cout << std::endl;
	Account::_totalNbWithdrawals++;
	return false;
}
