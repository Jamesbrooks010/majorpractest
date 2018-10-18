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
	credit = 0; 
	number_of_loans=0;
	number_of_deposits=0;
}


Customer::Customer(string Cname, double Cwage, double Ccash, double Cdebt, double Ccredit)
{
	id=count++;
	name=Cname;
	wage=Cwage;
	cash=Ccash;
	debt=Cdebt;
	credit = Ccredit; 
	number_of_loans= 0;
	number_of_deposits=0;
}

//financial product add//
void Customer::add_new_product(string accname, string CPname, double Cpvalue, double Cfvalue, int Cterm)
{

	if (CPname=="Deposit" || CPname=="deposit")
	{
		Deposit accname(.1);
		//sets fields of financial product//
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		Depositsheld.push_back(&accname); //placing name on to vector
		cout<<"Thankyou, a deposit has been successfully purchased"<<endl;
		credit = Cfvalue; 
		cash = Cpvalue; 
		number_of_deposits++;
		cout<<accname.get_interest_rate();


	}
	
//struggling to get object slciign working
	else if(CPname=="Loan" || CPname=="loan")
	{	
		Loan accname(.1);
		//sets fields of fin product
		accname.set_name(CPname);
		accname.set_pvalue(Cpvalue);
		accname.set_fvalue(Cfvalue); 
		accname.set_term(Cterm);
		Loansheld.push_back(&accname); //placing name on to vector
		cout<<"Thankyou, a loan has been successfully purchased"<<endl;
		debt = Cpvalue; 
		cash = Cpvalue; 
		number_of_loans++;
		cout<<accname.get_interest_rate();
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
double Customer::returncredit() 
{
	return credit; 
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
void Customer::pay_loan()
{

		if( debt >= wage) 
		{
			debt = debt - wage;
		}
		else
		{
			int wage1 = wage - debt; 
			debt = 0; 
			cash = wage1;
		} 

		//for(int i = 0 ; i < number_of_loans; i++)
		//{
		//	Loansheld[i]->~Loan(); // this is causing a segmentation fault 
			
			 //this line is causing problems 
			

	//		number_of_loans = number_of_loans - 1; 


		
}


void Customer::repay_deposit()
{
	cash = cash + credit; 
	credit = 0; 
	
		number_of_deposits = number_of_deposits - 1; 

}
void Customer::addinterest()
{
	if(number_of_loans > 0 )
	{
		debt = debt * ( 1 + (Loansheld[0]->get_interest_rate())); 
	}

	if (number_of_deposits > 0) 
	{
		credit = credit * (1 + (Depositsheld[0]->get_interest_rate())); 
	}

}

//aggregating debts and cash on the customers balance sheet, 

Customer::~Customer()
{
	//deleteds
	
}
