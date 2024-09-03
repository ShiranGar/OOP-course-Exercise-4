#include "Queue.h"

Queue::Queue()
{
	this->head = NULL;
	this->tail = NULL;
}

void Queue::addNewAccount(Account& newAccount)
{
	if (this->head == NULL)
	{
		/*this->head = &newAccount;
		this->tail = &newAccount;*/
		this->head = this->tail = &newAccount;
	}
	else
	{
		this->tail->setNext(newAccount);
		this->tail = &newAccount;
	}
}

Account& Queue::getAccount()
{
	Account* ptr = this->head;

	if (this->head == this->tail)
	{
		this->head = this->tail = NULL;
	}
	else
	{
		this->head = this->head->getNext();
	}

	return *ptr;
}

Account& Queue::topAccount() const
{
	return *(this->head);
}

bool Queue::isEmpty() const
{
	if (this->head == NULL)
	{
		return true;
	}

	return false;
}

ostream& operator<<(ostream& os, const Queue& queue)
{
	Account* ptr = queue.head;

	while (ptr != NULL)
	{
		os << *ptr;
		ptr = ptr->getNext();
	}

	return os;
}
