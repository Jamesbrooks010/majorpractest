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
		Deposit accname(1);
		//sets fields of financial product//
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		Depositsheld.push_back(&accname); //placing name on to vector
		cout<<"Thankyou, a deposit has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
		number_of_deposits++;
		cout<<accname.get_interest_rate();


	}
	
//struggling to get object slciign working
	else if(CPname=="Loan" || CPname=="loan")
	{	
		Loan accname(1);
		//sets fields of fin product
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		Loansheld.push_back(&accname); //placing name on to vector
		cout<<"Thankyou, a loan has been successfully purchased"<<'\n';
		debt = Cpvalue; 
		cash = Cfvalue; 
		number_of_loans++;
		cout<<accname.get_interest_rate();
	}
}





//Deposit* Customer::returnDepositsheld(double Drate)
//{


//	for(int i=0;i<number_of_deposits;i++)
//	{
//		//return &Depositsheld[i];
//		Depositsheld[i].set_Drate(Drate);
//	}
//	

//Loan* Customer::returnLoansheld() // return a vector of loans held by the customer 
//{
//	for(int i=0;i<number_of_loans;i++)
//	{
//
//	return &Loansheld[i]; 
//	}
//}

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
double Customer::returnfinprodirate()
{
	for(int h=0; h <number_of_loans;h++)
	{
		cout<< Loansheld[h]->get_interest_rate()<< endl; 
	}
	for(int i = 0; i < number_of_deposits;i++)
	{
		cout<< Depositsheld[i]->get_interest_rate()<<endl;
	}
}
void Customer::changeDrate(double rate)
{
	for(int i=0; i<number_of_deposits;i++)
	{
			Depositsheld[i]->set_Drate(rate);
	}
}
void Customer::changeLrate(double rate)
{
	for(int z=0;z<number_of_loans;z++)
	{
		Loansheld[z]->set_Irate(rate);
	}
}
void Customer::pay_loan(double Pamount)
{
	double sum=0;
	for(int i=0; i<number_of_loans; i++)
	{
		if(Loansheld[i]->get_value()<Pamount)
		{
			Pamount=Pamount-Loansheld[i]->get_value();
			Loansheld[i]->set_pvalue(0);
		}
		else
		{
			Loansheld[i]->set_pvalue(Loansheld[i]->get_value()-Pamount);
		}
	}
}

//aggregating debts and cash on the customers balance sheet, 

void Customer:: 
Customer::~Customer()
{
	//deleteds
	
}
