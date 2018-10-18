#include "Bank.h"
#include <iostream>
#include <vector>
using namespace std;
//including all types of fin prod

//constructors of bank
Bank::Bank()
{
	//general//
	string name="?";
	nocustomers = 0;

	//financial 
	profits=0;
	interest_rate=0;
	premium=0;
}

Bank::Bank(string Bname,double bankinterest_rate,double I_premium)
{
	//general//
	name=Bname;
	nocustomers = 0;
	//financial//
	profits=0;
	interest_rate=bankinterest_rate;
	premium=I_premium;

}

//adding customers to bank
void Bank::add_customer(Customer Bcustomer)
{

	int truecondition = 0; 
	for (int h = 0; h < nocustomers; h++)
	{ 
		if(customers_held[h]->get_id() == Bcustomer.get_id()) 
		{
			truecondition = 1;
			break;
		}

		else 
		{
			truecondition = 0; 
		}

	}
	if (truecondition == 0) 
	{


		customers_held.push_back(&Bcustomer);
		cout<<"succesful add"<<endl;
		nocustomers++; 
	
	}
	else if(truecondition==1)
	{ 
		cout<<"customer already in database"<<endl; 
	}
}

//using bank information to update member variables
void Bank::savingsupdate()
{
		aggcredit = 0;  //this will make agg sav 0 every time updated?
		aggdebt = 0; 
	for(int g=0; g<nocustomers; g++)
	{
		aggcredit = aggcredit + customers_held[g]->returndebt(); 
		aggdebt = aggdebt + customers_held[g]->returncredit(); 
	}
}


void Bank::set_rate(double rate, string type) /// need to set two lists, 
{
	for(int i=0;i<nocustomers;i++)
	{
		customers_held[i]->changeDrate(rate);
		customers_held[i]->changeLrate(rate);


		//customers_held[i].returnLoansheld().set_Irate(rate); 
	}
}
double Bank::showbsdebt() 
{
	return aggdebt; 
}
double Bank::showbscredit()
{
	return aggcredit; 
}
Customer* Bank::return_customer(int id)
{

	int truecondition = 0; 
	for (int h = 0; h < nocustomers; h++)
	{ 
		if(customers_held[h]->get_id() == id) 
		{
			truecondition = 1;

			return customers_held[h];
			break;
		}

		else 
		{
			truecondition = 0; 

		}
	}
	if(truecondition == 0 )
	{
		cout << "customer not found " << endl; 
	}
	


}

void Bank::repaydeposit(string customername)
{
	for(int h=0; h < nocustomers; h++ )

	{
		if( customers_held[h]->get_name() == customername ) 
		{
			customers_held[h]->repay_deposit(); 
		
		cout<< "Deposit paid" << endl; 
		}
	}


}
void Bank::accuminterest()
{
	
	for(int i = 0; i < nocustomers; i++ )
	{

		customers_held[i]->addinterest(); 


	}

}

Bank::~Bank()
{
//deleters
}