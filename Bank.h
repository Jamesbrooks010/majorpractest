 #ifndef BANK_H
#define BANK_H 
#include <string> 
#include "Customer.h" 
#include "Economy.h"
#include <vector>
class Bank// : public Economy  ____ unsure if inheriting anything from economy or not
{
	//int bankinterestrate; // the banks interest rate, dependent on whether it is cash positive or debt positive 
	std::string name; // name of bank or financial institution 
	std::vector<Customer> customers_held; //will store an array of customers to the givven
	double profits; // profits will be considered cash held by the bank, generated through interest charged on its assets.
	 
public:
	Bank();
	Bank(std::string Bname);
	void add_customer(Customer* Bcustomer);
	~Bank();
	//this will be the input that allows for customers to extend a new product

};

#endif 
