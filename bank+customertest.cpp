//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
int main(void)
{
	Customer vince;
	vince.add_new_product("vince","deposit",2, 2.5, 2);
	vince.add_new_product("vine","Deposit", 2, 2.5, 2);
	Customer james;
	james.add_new_product("james","deposit",2,2,2);
	james.add_new_product("james2","deposit",2,3,1);
	Bank Db;
	Db.add_customer(vince);
	Db.print_customer();
	Db.set_rate(0.1,"depoist");

}