#pragma once
class Account
{
public:
	Account(int); // constructor initializes balance
	void credit(int); // add an amount to the account balance
	/* write code to declare member function debit. */
	int& getBalance(); // return the account balance
	void debet(int);
private:
	int balance; // data member that stores the balance
};

