#pragma once
#include <iostream>

using namespace std;
class Account
{
private:
	string name;
	double amount;
	int id;
	Account* next;

	static int idGenerator;

public:
	Account(string name, double amount = 0);
	double getAmount() const;
	void setAmount(double newAmount);
	void setNext(Account& nextAccount);
	Account* getNext() const;
	friend ostream& operator<<(ostream& os, const Account& account);




};

