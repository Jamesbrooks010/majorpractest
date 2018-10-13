#include "Deposit.h"
using namespace std;

Deposit::Deposit() : Financialproduct()
{
	//specific to Deposit
	deposit_interest_rate=0;
}
Deposit::Deposit(double Ddeposit_interest_rate) : Financialproduct()
{
	//deposite specific
	deposit_interest_rate=Ddeposit_interest_rate;
}

int Deposit::get_interest_rate()
{
	return deposit_interest_rate;
}
void Deposit::set_Drate(double rate)
{
	deposit_interest_rate=(rate - .025);
}

Deposit::~Deposit()
{
	//deletes
}

