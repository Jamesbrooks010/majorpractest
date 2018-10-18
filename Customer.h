#ifndef CUSTOMER_H  
#define CUSTOMER_H 
#include "Financialproduct.h"
#include "Deposit.h"
#include "Insurance.h"
#include "Loan.h"
#include <iostream>
#include <string>
#include <vector> //including vector to allocate customer
//#include "Bank.h"

class Customer 
{
	static int count;
	int id;
	std::string name;
	double wage; //wage earned per time period which can be used to pay off loan or contribute to cash, term deposit financial product 
	double cash; //cash held not earning interest 
	double debt; //debt held to be repaid with interest
	double credit; //credit the customer is owed, via the bank. 
	//std::vector<Financialproduct**> financialheld; // just one, 
	std::vector<Loan*> Loansheld; 
	std::vector<Deposit*> Depositsheld; 
	int number_of_loans; 
	int number_of_deposits;


	//array of financial products :: this will be pointers to products held s
public:
	Customer();
	Customer(std::string Cname, double Cwage, double Ccash, double Cdebt, double Ccredit);
	//setters
	void add_new_product(std::string accname, std::string CPname, double Cpvalue, double Cfvalue, int Cterm);
	//void print_list();
	double returncash(); 
	double returndebt();
	double returncredit(); 


	int get_id();

	//Financialproduct** return_list();
//	Deposit* returnDepositsheld(); 
//	Loan* returnLoansheld(); 
	std::string get_name();
	double returnfinprodirate(); 
	void changeDrate(double rate);
	void changeLrate(double rate);
	void pay_loan();
	void repay_deposit(); 
	void addinterest(); 
	


	~Customer();

};
#endif