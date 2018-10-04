#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>



class customer : public bank //will inherit financial products from bank
{
	//keeping private
	int id; //id will be derived from static variable

	std::string name;

	double wage; //wage will be an input and credited each year

	double debt; // debt will be an input that is used to calculate total lending from bank

	bank* financial_product_ownership; //will hold all financial products the customer owns

	//how to store bank to which customer belongs to???

public:

	bank* get_financial_products(); //this function will return the array of financial products

	~customer();

};

#endif