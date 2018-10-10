#include "Customer.h"
#include <iostream>
using namespace std;
 
 int Customer::count=0;
Customer::Customer()
{
	id=count++;
	name="?";
	wage=0;
	cash=0;
	debt=0;
	//financialheld;

}
Customer::Customer(string Cname, double Cwage, double Ccash, double Cdebt)
{
	id=count++;
	name=Cname;
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
}	

//financial product adder
void Customer::add_new_product(string CPname, double Cpvalue, int Cterm)
{

	if(CPname=="Deposit" || CPname=="deposit")
	{
		Deposit name;
		name.set_name(CPname);
		name.set_pvalue(Cpvalue);
		name.set_term(Cterm);
		//name.set_bank(bank_name);
		financialheld.push_back(name); //placing name on to vectord
		cout<<"Thankyou a "<<CPname<<" has been successfully purchased"<<'\n';
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
		cout<<"error, product not available"<<'\n';
	}
}



/*
double Customer::print()
{
	cout<<cash;
}
/**/
void Customer::print_list()
{
	for(int i=0;i<2;i++)
	{
		cout<<financialheld[i].get_name()<<'\n';
	}
}
Customer::~Customer()
{
	//deleteds
	
}
