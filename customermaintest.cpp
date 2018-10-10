#include "Customer.h"
#include "Financialproduct.h"
int main(void)
{
	Customer vinnie;
	vinnie.add_new_product("Deposit", 100.50, 2);
	vinnie.add_new_product("Deposit",10,2);
	vinnie.print_list();
	//Customer james("james",10,2,8);


	Customer sock;
	sock.add_new_product("Deposit",10.25,19);
	sock.add_new_product("deposit",10.5,19);
	sock.print_list();

}