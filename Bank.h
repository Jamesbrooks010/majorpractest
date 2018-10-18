 #ifndef BANK_H
#define BANK_H  
#include "Customer.h" 
#include <vector>
#include <string>
//#include "Economy.h"
//#include "Financialproduct.h"
class Bank// : public Economy  ____ unsure if inheriting anything from economy or not
{
	//int bankinterestrate; // the banks interest rate, dependent on whether it is cash positive or debt positive 
	std::string name; // name of bank or financial institution 
	std::vector<Customer*> customers_held; //will store an array of customers to the givven
	double profits; // profits will be considered cash held by the bank, generated through interest charged on its assets.
	int nocustomers; 
	double aggcredit; 
	double aggdebt;
	double interest_rate;
	double premium;
	 
public:
	Bank();
	Bank(std::string Bname, double bankinterest_rate, double rate);
	//void print_customer();
	void add_customer(Customer Bcustomer);
	void savingsupdate(); 
	void change_product(std::string product, double rate);
	double get_rate(std::string type); 
	double showbsdebt();
	double showbscredit(); 
	Customer* return_customer(int id); 
	void repaydeposit(std::string customer); 
	void set_rate(double rate, std::string type);
	void accuminterest(); 
	
	~Bank();
	//this will be the input that allows for customers to extend a new product

};

#endif 
