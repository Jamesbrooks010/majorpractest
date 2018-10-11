#include "Bank.h"
#include <iostream>
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
		if(customers_held[h].get_id() == Bcustomer.get_id()) 
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


		customers_held.push_back(Bcustomer);
		cout<<"succesful add"<<endl;
		nocustomers++; 
	
	}
	else
	{ 
		cout<<"customer already in database"<<endl; 
	}
}

//using bank information to update member variables
void Bank::savingsupdate()
{
		aggsav = 0;  //this will make agg sav 0 every time updated?
		aggdebt = 0; 
	for(int g=0; g<nocustomers; g++)
	{

		aggsav = aggsav + customers_held[g].returncash(); 
		aggdebt = aggdebt + customers_held[g].returndebt(); 
	}
}

//returning member variables of bank
void Bank::print_customer()
{
	for(int i=0; i<nocustomers;i++)
	{
		customers_held[i].print_list();
	}
}


double Bank::set_rate(double rate, string type)
{
	for(int i=0;i<nocustomers;i++)
	{
		Financialproduct* list=customer_held[i].return_list();

		for(int z=0;z<list.size()<z++)
		{
			if(list[z].get_name()==type)
			{
				list[z].set_rate(rate);
			}
		}
	}
}


Bank::~Bank()
{
//deleters
}