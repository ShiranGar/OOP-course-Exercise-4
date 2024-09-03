#pragma once
#include "Account.h"
class Queue
{
private:
	Account* head;
	Account* tail;

public:
	Queue();
	void addNewAccount(Account& newAccount);
	Account& getAccount();
	Account& topAccount() const;
	bool isEmpty() const;

	friend ostream& operator<<(ostream& os, const Queue& queue);

};

