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
void Customer::add_new_product(string Cname, double Cpvalue, int Cterm)
{

	if(Cname=="Deposit" || Cname=="deposit")
	{
		Deposit name;
		name.set_name(Cname);
		name.set_pvalue(Cpvalue);
		name.set_term(Cterm);
		cout<<"A "<<Cname<<" has been successfully purchased";
	}
	/*
	else if(Cname=="Deposit" || Cname="deposit")
	{	
		Deposit name;
		name.set_name(Cname);
		name.set_pvalue(Cpvalue);
		name.set_term(Cterm);	
		cout<<"A "<<Cname<<" has been successfully purchased";
	}
	else if(Cname=="Insurance" || Cname="insurance")
	{
		Insurance name;
		name.set_name(Cname);
		name.set_pvalue(Cpvalue);
		name.set_term(Cterm);
		cout<<"A "<<Cname<<" has been successfully purchased";
	}
	/**/
	else
	{
		cout<<"error, product not available";
	}
}



/*
double Customer::print()
{
	cout<<cash;
}
/**/

Customer::~Customer()
{
	//deleteds
	
}
