#ifndef ECONOMY_H
#define ECONOMY_H

#include<string> 

class Economy 
{ 
	static int timeperiod; //time period the economy is in, begining 0?, 1 , 2 , 3, 4, ::could be interpreted as years of quaters??
	std::string name; // name of economy i.e australia, america 
	int interestrate; //global cash rate 
	double aggsav; //all cash savings in the economy 
	double aggdebt; //all debt in the economy 
	
public: 
	//functions still to be decided 
	Economy();
	Economy(std::string); 

	int interestrateset(); 
	



}

#endif