#include "Account.h"
int Account::idGenerator = 1;

Account::Account(string name, double amount)
{
	this->id = idGenerator++;
	this->name = name;
	this->amount = amount;
	this->next = NULL;
}

double Account::getAmount() const
{
	return this->amount;
}

void Account::setAmount(double newAmount)
{
	this->amount = newAmount;
}

void Account::setNext(Account& nextAccount)
{
	this->next = &nextAccount;
}

Account* Account::getNext() const
{
	return this->next;
}

ostream& operator<<(ostream& os, const Account& account)
{
	os << "id: " << account.id << " name: " << account.name << endl;
	return os;
}
