#include "Customer.h"
#include <iostream>
using namespace std;
 
Customer::Customer()
{
	wage=0;
	cash=0;
	debt=0;
	financialheld=new Financialproduct[10];

}
Customer::Customer(double Cwage, double Ccash, double Cdebt)
{
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
	financialheld=new Financialproduct[10];
}

//financial product adder
void Customer::add_new_product(Financialproduct Cproduct)
{
	int i=0;
	if(i>=10)
	{
		cout<<"you have reached your product maximum";
	}
	while(i<10)
	{
		financialheld[i]=Cproduct;
	}
	i++;
}
double Customer::print()
{
	cout<<cash;
}

Customer::~Customer()
{
	//deleteds
}
