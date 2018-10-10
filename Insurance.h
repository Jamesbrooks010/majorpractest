#ifndef INSURANCE_H
#define INSURANCE_H
#include <string>
#include "Financialproduct.h" //including parent class of financial products

class Insurance : public Financialproduct
{
	int insurance_premium;
public:
	//constructor
	Insurance();
	Insurance(int I_premium);
//deleterer
	~Insurance();

};
#endif