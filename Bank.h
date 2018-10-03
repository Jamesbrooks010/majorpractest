#ifndef BANK_H
#define BANK_H 

#include<string> 
#include "Economy.h"

class Bank : public Economy
{
	int bankinterestrate; // the banks interest rate, dependent on whether it is cash positive or debt positive 
	std::string name; // name of bank or financial institution 
	//will need to include pointer to an array of customers 
	double aggbankdebt;  // total amount of bank debt, this will be liabilities or deposits owed to customers 
	double aggbankassets;  // assets held at the bank this will be loans it has issued to others 

	double profits; // profits will be considered cash held by the bank, generated through interest charged on its assets.
	double baddebts; // loans that have defaulted, or insurance that must be paid out. 

} 

#endif 
