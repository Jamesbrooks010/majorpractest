 #ifndef BANK_H
#define BANK_H 
#include <string> 
#include "Customer.h" 
#include "Economy.h"

class Bank// : public Economy  ____ unsure if inheriting anything from economy or not
{
	//int bankinterestrate; // the banks interest rate, dependent on whether it is cash positive or debt positive 
	std::string name; // name of bank or financial institution 
	Customer* customers_held; //will store an array of customers to the givven bank 
	//double aggbankdebt;  // total amount of bank debt, this will be liabilities or deposits owed to customers 
	//double aggbankassets;  // assets held at the bank this will be loans it has issued to others 

	double profits; // profits will be considered cash held by the bank, generated through interest charged on its assets.
	//.0double baddebts; // loans that have defaulted, or insurance that must be paid out. 
public:
	Bank();
	Bank(int Bintrate, std::string Bname);

	//this will be the input that allows for customers to extend a new product

};

#endif 
