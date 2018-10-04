#ifndef CUSTOMER_H 
#define CUSTOMER_H 
#include "Financialproduct.h"
#include <string>


class Customer 
{ 
	double wage; //wage earned per time period which can be used to pay off loan or contribute to cash, term deposit financial product 
	double cash; //cash held not earning interest 
	double debt; //debt held to be repaid with interest
	Financialproduct* financialheld;
	//array of financial products :: this will be pointers to products held s
public:
	Customer();
	Customer(double Cwage, double Ccash, double Cdebt);
	//setters
	void add_new_product(Financialproduct* Cproduct);
	//deleters//
	~Customer();

};
#endif