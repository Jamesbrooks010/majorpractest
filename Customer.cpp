#include "Customer.h"
#include <iostream>
using namespace std;
 
Customer::Customer()
{
	name="?";
	wage=0;
	cash=0;
	debt=0;
	financialheld;

}
Customer::Customer(string Cname, double Cwage, double Ccash, double Cdebt)
{
	name=Cname;
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
}	

//financial product adder
void Customer::add_new_product(string CPname, Bank bank_name, double Cpvalue, int Cterm)
{

	if(CPname=="Deposit" || CPname=="deposit")
	{
		Deposit name;
		name.set_name(CPname);
		name.set_pvalue(Cpvalue);
		name.set_term(Cterm);
		name.set_bank(bank_name);
		financialheld.push_back(name); //placing name on to vectord
		cout<<"Thankyou a "<<CPname<<" has been successfully purchased"<<'/n';
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
