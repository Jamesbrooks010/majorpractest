#include "Financialproduct.h"
#include "Deposit.h"
#include <iostream>
using namespace std;

int main(void)
{
	Deposit connor;
	connor.set_name("bank a");
	connor.set_pvalue(10.5);
	connor.set_term(2);
	cout<<connor.get_value();

	Deposit james("a good investment", 10);

}


