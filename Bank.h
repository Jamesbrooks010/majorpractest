#ifndef BANK_H
#define BANK_H 

#include<string> 
#include "Economy.h"

class Bank : public Economy
{
	int bankinterestrate; 
	std::string name; 
	//will need to include pointer to an array of customers 
	double aggbankdebt;  
	double aggbankcash; 
	double profits; 
	double baddebts; 

} 

#endif 
