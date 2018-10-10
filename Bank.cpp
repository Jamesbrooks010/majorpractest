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

}

Bank::Bank(string Bname)
{
	name=Bname;
	profits=0;
}
void Bank::add_customer(Customer Bcustomer)
{
	customers_held.push_back(Bcustomer);
	cout<<"succesful add";
}

void Bank::print_customer()
{
	for(int i=0; i<2;i++)
	{
		customers_held[i].print_list();
	}
}
Bank::~Bank()
{

}