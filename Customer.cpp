#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;
 //static use for ID
 int Customer::count=0;

 //constructors//
Customer::Customer()
{
	id=count++;
	name="?";
	wage=0;
	cash=0;
	debt=0;
}


Customer::Customer(string Cname, double Cwage, double Ccash, double Cdebt)
{
	id=count++;
	name=Cname;
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
}	

//financial product add//
void Customer::add_new_product(string accname, string CPname, double Cpvalue, double Cfvalue, int Cterm)
{

	if (CPname=="Deposit" || CPname=="deposit")
	{
		Deposit accname;
		//sets fields of financial product//
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		financialheld->push_back(accname); //placing name on to vector
		cout<<"Thankyou, a deposit has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 




	}
	
	else if(CPname=="Loan" || CPname=="loan")
	{	
		Loan accname;
		//sets fields of fin product
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		financialheld->push_back(accname); //placing name on to vector
		cout<<"Thankyou, a loan has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
	}

	else if(CPname=="Insurance" || CPname=="insurance")
	{
		Insurance accname;

		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		financialheld->push_back(accname); //placing name on to vector
		cout<<"Thankyou, insurance has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
	}
	
	else
	{
		cout<<"error, product not available"<<'\n';
	}
}



void Customer::print_list()
{
	for(int i=0;i<2;i++)
	{
		cout<<name<<'\n';
	}
}

Financialproduct* Customer::return_list()
{
	return financialheld;
}
double Customer::returncash()
{
	return cash; 
}
double Customer::returndebt()
{
	return debt; 
}

string Customer::get_name()
{
	return name;
}
int Customer::get_id()
{
	return id;
}

Customer::~Customer()
{
	//deleteds
	
}
