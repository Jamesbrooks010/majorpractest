#include "Bank.h"
#include "Customer.h"
#include <iostream>
#include "Financialproduct.h"
#include "Deposit.h"
using namespace std;
//including all types of fin prod

Bank::Bank()
{
	string name="?";
	profits=0;
	nocustomers = 0; 

}

Bank::Bank(string Bname)
{
	name=Bname;
	profits=0;
	nocustomers = 0;
}
void Bank::add_customer(Customer Bcustomer)
{
	int truecondition = 0; 
	for (int h = 0; h < nocustomers; h++)
	{ 
	if(customers_held[h] == Bcustomer) 
		truecondition = 1;
	else 
		truecondition = 0; 
	} 
	if (truecondition == 0) 
	{
	customers_held.push_back(Bcustomer);
	cout<<"succesful add"<<endl;
	nocustomers++; 
	else 
		cout<<"customer already in datatbase"<<endl; 
	}

}

void Bank::print_customer()
{
	for(int i=0; i<nocustomers;i++)
	{
		customers_held[i].print_list();
	}
}
Bank::~Bank()
{

}