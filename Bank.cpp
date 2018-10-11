#include "Bank.h"
#include <iostream>
using namespace std;
//including all types of fin prod

Bank::Bank()
{
	string name="?";
	profits=0;
	nocustomers = 0; 
	interest_rate=0;

}

Bank::Bank(string Bname,double bankinterest_rate)
{
	name=Bname;
	profits=0;
	nocustomers = 0;
	interest_rate=bankinterest_rate;

}
void Bank::add_customer(Customer Bcustomer)
{
	int truecondition = 0; 
	/*for (int h = 0; h < nocustomers; h++)
	{ 
		if(customers_held[h] == Bcustomer) 
		{//unsure if you can use logicals on an object 
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
		/**/

		customers_held.push_back(Bcustomer);
		cout<<"succesful add"<<endl;
		nocustomers++; 
		/*
	}
	else
	{ 
		cout<<"customer already in datatbase"<<endl; 
	}
/**/
}

void Bank::print_customer()
{
	for(int i=0; i<nocustomers;i++)
	{
		customers_held[i].print_list();
	}
}
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
Bank::~Bank()
{

}