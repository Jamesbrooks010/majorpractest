#ifndef ECONOMY_H
#define ECONOMY_H

#include <string> 

class Economy 
{ 
	global int timeperiod; //time period the economy is in, begining 0?, 1 , 2 , 3, 4, ::could be interpreted as years of quaters??
	std::string name; // name of economy i.e australia, america 
	double interestrate; //global cash rate 
	double aggsav; //all cash savings in the economy 
	double aggdebt; //all debt in the economy 
	
public: 
	//functions still to be decided 
	Economy();
	Economy(std::string econame); 
//setters
	double interestrateset(double Eirate); 
//getters
	double get_interestrate(); //returns interest rate
	double get_aggsav(); //returns aggregated savings
	double get_aggdebt(); //returns aggregated debts

	~Economy(); 


}; 

#endif