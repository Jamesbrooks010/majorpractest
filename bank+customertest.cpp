//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
int main(void)
{
	Customer vince;
	vince.add_new_product("vince","deposit",2, 2.5, 2);
	vince.add_new_product("vine","Deposit", 2, 2.5, 2);
	
	Bank Db;
	Db.add_customer(vince);
	Db.print_customer();

}