#ifndef BANK_H
#define BANK_H
#include <string>

class bank
{
	std::string bank_name;
	double total_lending;
	customer* customer_list; //store an array of customers that are patrons of the bank

}