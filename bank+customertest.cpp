//testing the adding of a customer to bank
#include "Bank.h"
#include "Customer.h"
#include <string>
#include<iostream> 
using namespace std; 

int main(void)
{
	Economy world;

	Customer vince;
	cout<<1;
	vince.add_new_product("vince's savings deposit","deposit",0, 3000, 2);
	cout<<2;
	vince.add_new_product("Vinces homeloan","Loan", 20000, 0, 20);
cout<<3;
	cout << "cash debt credit \n" ; 
cout<<4;
	cout << vince.returncash()<< " " << vince.returndebt() << " " << vince.returncredit()<<'\n'; 
cout<<5;

	Customer james("James",1000,24,0,0);
	cout<<6;

	james.add_new_product("James_savings","deposit",0,2000,25);
	cout<<7;

	james.add_new_product("James Loan","Loan",2000,0,10);
	cout<<8;
	Bank db("Db",.2,.3);
	cout<<9;
	db.add_customer(vince);
	cout<<10;
	db.add_customer(james);
	cout<<11;
	//db.add_customer(vince);
cout<<12;
	db.set_rate(.1,"deposit");
cout<<13;


	james.pay_loan();
cout<<14;

	
	db.savingsupdate(); // causing problems 

		james.returnfinprodirate();

	

	cout << "agg debt " << db.showbsdebt() << " agg credit " << db.showbscredit() << endl; 
	db.accuminterest(); 
	db.savingsupdate(); 
	james.pay_loan();
	db.accuminterest(); 
	db.savingsupdate(); 

	cout << "agg debt " << db.showbsdebt() << " agg credit " << db.showbscredit() << endl; 

	//Db.print_customer();
	//db.set_rate(.300,"deposit"); // 


	james.returnfinprodirate(); //these ones 
	vince.returnfinprodirate(); 


	db.set_rate(.1,"deposit");

	james.returnfinprodirate(); 
	vince.returnfinprodirate();

	cout << (db.return_customer(1))->get_name()<< endl;  


} 




