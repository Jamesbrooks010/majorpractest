#ifndef FINANCIALPRODUCT_H 
#define FINANCIALPRODUCT_H
#include <string>

class financialproduct 
{ 
	std::string name; //string name ofthe financial product i.e cba debt 
	double principalvalue; // this will allow to distinguish between term deposit, loan and then potentially insurance(I.e) collateral and payout
	double finalvalue;  //final value, for loan = 0 , for term deposit = 20,000 + interest
	int termduration; // duration i.e twenty time periods or thirty
	int interestratepremium; // premium charged on global economy interest rate, term deposit lower, interest rate subject to bankruptcy and or event risk 




}






#endif