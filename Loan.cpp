#include "Loan.h"

Loan::Loan(): Financialproduct()
{
	Loan_interest=0;
}

Loan::Loan(double rate)
{
	Loan_interest=rate;
}

void Loan::set_rate(double rate)
{
	Loan_interest=rate;
}

Loan::~Loan()
{
	//del
}