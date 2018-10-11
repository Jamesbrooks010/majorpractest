#include "Insurance.h"
using namespace std;

Insurance::Insurance(): Financialproduct()
{
	insurance_premium=0;
}

Insurance::Insurance(double I_premium)
{
	insurance_premium=I_premium;
}
void Insurance::set_rate(double Iprem)
{
	insurance_premium=Iprem;
}
Insurance::~Insurance()
{
	//deletes
}
