//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
int main(void)
{
	Customer vince;
	vince.add_new_product("deposit", 2.5, 2);
	vince.add_new_product("Deposit", 2.5, 2);

	Customer james;
	james.add_new_product("Deposit",10,10);
	james.add_new_product("depsoit",20,20);
	
	Bank Db;
	Db.add_customer(vince);
	Db.print_customer();

}