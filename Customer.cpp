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
void Customer::add_new_product(string accname, string CPname, double Cpvalue, double Cfvalue, int Cterm)
{

	if (CPname=="Deposit" || CPname=="deposit")
	{
		Deposit accname;
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		//name.set_bank(bank_name);
		financialheld.push_back(accname); //placing name on to vectord
		cout<<"Thankyou, a deposit has been successfully purchased"<<'\n';
		//bankname.add_customer(CPname); 
		debt = Cpvalue; 
		cash = Cfvalue; 
		//accname.savingsupdate(); 



	}
	/*
	else if(Cname=="Deposit" || Cname=="deposit")
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
double Customer::returncash()
{
	return cash; 
}
double Customer::returndebt()
{
	return debt; 
}

Customer::~Customer()
{
	//deleteds
	
}
