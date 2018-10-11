#ifndef DEPOSIT_H
#define DEPOSIT_H
#include "Financialproduct.h"

class Deposit : public Financialproduct
{
	double deposit_interest_rate;
public:
	
	//default constructor
	Deposit();
	//set constructor
	Deposit(double Ddeposit_interest_rate);


	//getters
	int get_interest_rate();
	//setters//
	void set_interest_rate(double rate);
	//deleters
	~Deposit();
};
#endif