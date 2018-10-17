//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
#include <string>
#include<iostream> 
using namespace std; 

int main(void)
{
//inputting world economy by default
	Economy world;
/*
	string customercon, Cname; 
	double Cwage,Ccash,Cdebt; 
//economy has been created in name a.

	cout<< "would you like to create customers (y/n)?: "<< endl;
	cin >> customercon; 

		if ( customercon == "y")
		{
			cout<< "please enter name: "<< endl; 
			cin>> Cname; 
			cout<< "please enter wage" << endl; 
			cin>> Cwage; 
			cout<< "please enter cash"<<endl; 
			cin>> Ccash; 
			cout<<"please enter debt"<< endl; 
			cin >> Cdebt; 
		Customer name(Cname,Cwage,Ccash,Cdebt);
			cout << Cname << " has been created"<< endl;

		}
		
/**/

	Customer vince;
	vince.add_new_product("vince's savings deposit","deposit",0, 3000, 2);
	vince.add_new_product("Vinces homeloan","Loan", 20000, 0, 20);
	Customer james("James",25,24,0);
	james.add_new_product("James_savings","deposit",0,2000,25);
	james.add_new_product("James Loan","Loan",2000,0,10);
	
	Bank db("Db",.2,.3);
	db.add_customer(vince);
	db.add_customer(james);
	//Db.print_customer();
	//db.set_rate(.300,"deposit"); // 

	james.returnfinprodirate(); 

} 




