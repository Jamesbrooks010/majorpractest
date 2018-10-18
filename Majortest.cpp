#include "Bank.h"
#include "Customer.h"

int main(void)
{

//test 1: creation of objects, bank, customer, economy, financial products default constructor//
	Economy a;
	Economy b;
	Economy c;

	Bank a;
	Bank b;
	Bank c;

	Customer ned;
	Customer james;
	Customer vince;
	Customer morgan;

	Deposit a;
	Deposit b;
	Deposit c;

	Loan a;
	Loan b;
	Loan c;

	//test 2: cration of objects, using the specific constructor//
	Economy d("Australia");
	Economy e("Japan");
	Economy f("New Zealand");

	Bank d("Bank d", 0.1,0.1);
	Bank e("Bank e", 0.2,0.2);
	Bank f("Bank f", 0.3,0.4);

	Customer jimmmy("Jimmy",1,1,1,1);
	Customer neddy("neddy",1,1,1,1);
	Customer vinnie("Vinnie",1,1,1,1);

	Deposit d(.1);
	Deposit e(.2);
	Deposit f(.3);

	Loan d(.1);
	Loan e(.2);
	Loan f(.3);

//test 3: creation of finanical products through customers
	ned.add_new_product("neds fund","deposit",0,3000,2);
	ned.add_new_product("neds fund","deposit",0,4000,2);
	ned.add_new_product("neds loan","loan",10,0,0);
//test 4: adding of customers to bank
	b.add_customer(ned);
	b.add_customer(james);

	//adding customer twice
	a.add_customer(ned);
	a.add_customer(ned);



}