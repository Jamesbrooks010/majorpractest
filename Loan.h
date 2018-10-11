#ifndef LOAN_H
#define LOAN_H
#include "financialproduct"
#include<string> 

class Loan : public financialproduct
{
protected:
	double Loan_interest;
	
public:

	Loan();
	Loan(int rate);
	void set_rate(int rate);
	~Loan();
}