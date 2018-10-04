#ifndef DEPOSIT_H
#define DEPOSIT_H
#include "Financialproduct.h"

class Deposit : public Financialproduct
{
	std::string description;
	int deposit_interest_rate;
public:
	//getters
	int get_interest_rate();
	double get_deposit_value();
	//setters//
	void set_interest_rate();
	//deleters
	~Deposit();
};
#endif