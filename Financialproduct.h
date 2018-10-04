#ifndef FINANCIALPRODUCT_H 
#define FINANCIALPRODUCT_H
#include <string>


//just noting that for financial products, the specific type of financial product will again be a new class
class Financialproduct 
{ 
	std::string name; //string name ofthe financial product i.e cba debt 

protected: //allows below to be accessed by child class (which will be the type of fin product e.g. bond)
	double principalvalue; // this will allow to distinguish between term deposit, loan and then potentially insurance(I.e) collateral and payout
	double finalvalue;  //final value, for loan = 0 , for term deposit = 20,000 + interest
	int termduration; // duration i.e twenty time periods or thirty


	//interest rate premium could be left to subclass- contingent on your thoughts on this james??
	//!!!!!!!!!!!!!!!!  int interestratepremium; // premium charged on global economy interest rate, term deposit lower, interest rate subject to bankruptcy and or event risk 
public:
	Financialproduct();
	Financialproduct(std::string Fname,double Fpvalue, double Ffvalue, int Ftermduration);

};
#endif