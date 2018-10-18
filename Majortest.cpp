#include "Bank.h"
#include "Customer.h"

int main(void)
{

//test 1: creation of objects, bank, customer, economy, financial products default constructor//
	Economy a;
	Economy b;
	Economy c;

	Bank cba;
	Bank nab;
	Bank westpac;

	Customer ned;
	Customer james;
	Customer vince;
	Customer morgan;

	Deposit aa;
	Deposit bb;
	Deposit cc;

	Loan ab;
	Loan ba;
	Loan ca;

	//test 2: cration of objects, using the specific constructor//
	Economy dth("Australia");
	Economy eht("Japan");
	Economy fht("New Zealand");

	Bank dasa("Bank d", 0.1,0.1);
	Bank efd("Bank e", 0.2,0.2);
	Bank fgf("Bank f", 0.3,0.4);

	Customer jimmmy("Jimmy",1,1,1,1);
	Customer neddy("neddy",1,1,1,1);
	Customer vinnie("Vinnie",1,1,1,1);

	Deposit dgf(.1);
	Deposit ezs(.2);
	Deposit fgre(.3);

	Loan dad(.1);
	Loan esfd(.2);
	Loan ffsd(.3);

//test 3: creation of finanical products through customers
	ned.add_new_product("neds fund","deposit",0,3000,2);
	ned.add_new_product("neds fund","deposit",0,4000,2);
	ned.add_new_product("neds loan","loan",10,0,0);
//test 4: adding of customers to bank
	dasa.add_customer(ned);
	fgf.add_customer(james);

	//adding customer twice
	efd.add_customer(ned);
	efd.add_customer(ned);

//payingoff financial products
	ned.pay_loan();
	ned.repay_deposit();
//banks changing interset rates

efd.set_rate(10);
}