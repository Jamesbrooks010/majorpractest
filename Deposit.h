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
	double get_interest_rate();
	//setters//
	void set_Drate(double rate);

	//deleters
	~Deposit();
};
#endif