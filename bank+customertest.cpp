//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
#include "Deposit.h"
int main(void)
{
	Economy world;
	Customer Vince("Vince", 24, 20,0);
	Vince.add_new_product("vince's savings deposit","deposit",0, 3000, 2);
	Vince.add_new_product("Vinces homeloan","Loan", 20000, 0, 20);
	Customer James("James",25,24,0);
	James.add_new_product("James_savings","deposit",0,2000,25);
	James.add_new_product("James Loan","Loan",2000,0,10);
	Bank Db("Db",.2,.3);
	Db.add_customer(Vince);
	Db.add_customer(James);
	//Db.print_customer();
	Db.set_rate(.300,"deposit"); // 

	James.returnfinprodirate(); 


}