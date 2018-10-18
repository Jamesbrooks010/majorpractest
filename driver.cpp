#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

int main(void)
{
	Economy world;
	string type_response;
	cout<<"Hi there, are you a bank, or customer? "<<endl;
	cin>>type_response;	
	
	if(type_response=="Bank"||type_response=="bank")
	{
		
		string bank_response;
		cout<<"would you like to change interest rates? "<<endl;
		cin>>bank_response;

		if(bank_response=="y")
		{
			double Brate;
			cout<<"declare rate: "<<endl;
			cin>>Brate;

			string Btype;
			cout<<"input type of financial product "<<endl;
			cin>>Btype;
			
			db.set_rate(Brate, Btype);
		}
		else if(bank_response=="n")
		{
			cout<<"Thanks"<<endl;
		}
		else
		{
			cout<<"error"<<endl;
		}

	}
	else if(type_response=="Customer" || type_response=="customer")
	{
		string response;
		cout<<"are you an existing customer? (y/n)"<<endl;
		cin>>response;

		if(response=="y")
		{
			int ID;
			cout<<"Please state your ID"<<endl;
			cin>>ID:

			Customer find=*return_customer(ID);

			string product, accname;
			double Cpval, Cfval, Cterm;

			cout<<"what financial product? Deposit or Loan? "<<endl;
			cin>>product;

			cout<<"what principal value?"<<endl;
			cin>>Cpval;

			cout<<"what final value?"<<endl;
			cin>>Cfval;

			cout<<"what term?"<<endl;
			cin>>Cterm;

			find->add_new_product(accname, product, Cpval,Cfval,Cterm);
		}
		else if(response=="n")
		{
			cout<<"Thank you"<<endl;

		}
		else
		{
			cout<<"response not found"<<endl;
		}
	else
	{
		cout<<"the category stated is not available '\n' please try again, or check spelling"<<endl;
	}
}

