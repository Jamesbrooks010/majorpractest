//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
#include "Deposit.h"
#include "string"
#include<iostream> 
using namespace std; 

int main(void)
{

	string economyinput, customercon, name; 
	double wage,cash,debt; 

	cout << "please name Economoy: "<<endl; 
	cin >> economyinput ; 
	Economy a;

//economy has been created in name a.

	cout<< "would you like to create customers (y/n)?: "<< endl;
	cin >> customercon; 

		if ( customercon == "y")
		{
			cout<< "please enter name: "<< endl; 
			cin>> name; 
			cout<< "please enter wage" << endl; 
			cin>> wage; 
			cout<< "please enter cash"<<endl; 
			cin>> cash; 
			cout<<"please enter debt"<< endl; 
			cin >> debt; 

		Customer name(name,wage,cash,debt);
			cout << name << "has been created"<< endl;

		}
		



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




