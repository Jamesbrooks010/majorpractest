#ifndef LOAN_H
#define LOAN_H
#include "Financialproduct.h"
#include<string> 

class Loan : public Financialproduct
{
protected:
	double Loan_interest;
	// double repaidamount; function of time period * wage,

	
public:

	Loan();
	Loan(double rate);
	void set_Irate(double rate);
	int get_interest_rate();
	~Loan();
};
#endif