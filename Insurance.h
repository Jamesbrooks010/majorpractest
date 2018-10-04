#ifndef INSURANCE_H
#define INSURANCE_H
#include <string>
#include "Financialproduct.h" //including parent class of financial products

class Insurance : public Financialproduct
{
	std::string description;
	int insurance_premium;
public:
	//constructor
	Insurance();

//deleterer
	~Insurance();

};
#endif