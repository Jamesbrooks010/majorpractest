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
	number_of_loans=0;
	number_of_deposits=0;
}


Customer::Customer(string Cname, double Cwage, double Ccash, double Cdebt)
{
	id=count++;
	name=Cname;
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
	number_of_loans= 0;
	number_of_deposits=0;
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
		Depositsheld.push_back(accname); //placing name on to vector
		cout<<"Thankyou, a deposit has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
		number_of_deposits++;



	}
	
//struggling to get object slciign working
	else if(CPname=="Loan" || CPname=="loan")
	{	
		Loan accname;
		//sets fields of fin product
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		Loansheld.push_back(accname); //placing name on to vector
		cout<<"Thankyou, a loan has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
		number_of_loans++;
	}
}





Deposit* Customer::returnDepositsheld()
{
	for(int i=0;i<number_of_deposits;i++)
	{
		return &Depositsheld[i];
	}
	
}

Loan* Customer::returnLoansheld() // return a vector of loans held by the customer 
{
	for(int i=0;i<number_of_loans;i++)
	{

	return &Loansheld[i]; 
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
