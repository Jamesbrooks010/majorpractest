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

void Loan::set_rate(double rate)
{
	Loan_interest=rate;
}

Loan::~Loan()
{
	//del
}