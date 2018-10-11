#include "Customer.h"
#include "Bank.h"
#include <iostream>
#include <string> 
using namespace std; 

int main()
{
	 Customer vince ("vince", 10,1000, 20);
	 Customer sock ("sock", 20, 21, 1); 
	 Bank CBA("CBA",0.2);

	 vince.add_new_product("vincents_savings","Deposit", 2000, 0 , 20); 
	 sock.add_new_product("socks_savings","deposit", 2001,0,2); 

	 CBA.print_customer(); 


}

