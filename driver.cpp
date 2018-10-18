#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

int main(void)
{
	Economy world;
	Bank db;

	string type_response;
	cout<<"Hi there, are you a bank, or customer? "<<endl;
	cin>>type_response;	
	
	if(type_response=="Bank"||type_response=="bank")
	{
		
		string bank_response;
		cout<<"would you like to change interest rates? (y/n) "<<endl;
		cin>>bank_response;

		if(bank_response=="y")
		{
			double Brate;
			cout<<"declare rate: "<<endl;
			cin>>Brate;
			db.set_rate(Brate);
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
			cin>>ID;

			Customer* find=db.return_customer(ID);

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
			string response2;
			cout<<"would you like to create an account? (y/n) "<<endl;
			cin>>response2;
			if(response2=="y")
			{
				string Cname;
				cout<<"please state your name"<<endl;
				cin>>Cname;
				double Cwage, Ccash, Ccredit, Cdebt;
				
				cout<<"please state your wage"<<endl;
				cin>>Cwage;
				
				cout<<"Please state your cash"<<endl;
				cin>>Ccash;

				cout<<"Please state your credit"<<endl;
				cin>>Ccredit;

				cout<<"Please state your debt"<<endl;
				cin>>Cdebt;

				Customer name(Cname,Cwage,Ccash,Ccredit,Cdebt);
				cout<<"thankyou "<< Cname<<" your account has been succesfully created"<<endl;
			}
			else if(response2=="n")
			{
				cout<<"thankyou "<<endl;
			}

		}
		else
		{
			cout<<"response not found"<<endl;
		}
	}
	else
	{
		cout<<"the category stated is not available '\n' please try again, or check spelling"<<endl;
	}
}


