#include "Loan.h"

Loan::Loan(): Financialproduct()
{
	Loan_interest=0;
}

Loan::Loan(double rate)
{
	Loan_interest=rate;
	//repaidamount = customer.returnwage() * economy.timeperiod(), (within customer)
}

void Loan::set_Irate(double rate)
{
	Loan_interest=(rate +.025);
}
int Loan::get_interest_rate()
{
	return Loan_interest;
}
Loan::~Loan()
{
	//del
}