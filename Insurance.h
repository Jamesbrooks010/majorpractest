#ifndef INSURANCE_H
#define INSURANCE_H
#include <string>
#include "Financialproduct.h" //including parent class of financial products

class Insurance : public Financialproduct
{
	double insurance_premium;
public:
	//constructor
	Insurance();
	Insurance(double I_premium);
	void set_rate(double Iprem);
//deleterer
	~Insurance();

};
#endif