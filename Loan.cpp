#include "Loan.h"

Loan::Loan()
{
	Loan_interest=0;
}

Loan::Loan(int rate)
{
	Loan_interest=rate;
}

void Loan::set_rate(int rate)
{
	Loan_interest=rate;
}

Loan::~Loan()
{
	//del
}