#ifndef CUSTOMER_H 
#define CUSTOMER_H 
#include "Financialproduct.h"
#include "Deposit.h"
//#include "Insurance.h"
//#include "Loan.h"
#include <iostream>
#include <string>
#include <vector> //including vector to allocate customer
//#include "Bank.h"

class Customer 
{
	int id;
	std::string name;
	double wage; //wage earned per time period which can be used to pay off loan or contribute to cash, term deposit financial product 
	double cash; //cash held not earning interest 
	double debt; //debt held to be repaid with interest
	std::vector<Financialproduct> financialheld;
	//array of financial products :: this will be pointers to products held s
public:
	Customer();
	Customer(std::string Cname, double Cwage, double Ccash, double Cdebt);
	//setters
	void add_new_product(std::string CPname, double Cpvalue, int Cterm);
	//deleters//
	~Customer();

};
#endif