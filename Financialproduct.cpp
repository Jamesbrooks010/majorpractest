#include "Financialproduct.h"
#include <string>
using namespace std;

//default constructor
Financialproduct::Financialproduct() 
{
	name="?";
	principalvalue=0;
	finalvalue=0;
	termduration=0;
	durationperiod = 0; 
	startingduration = 0;
}

Financialproduct::Financialproduct(std::string Fname,double Fpvalue, double Ffvalue, int Ftermduration, Economy world)
{
	name=Fname;
	principalvalue=Fpvalue;
	finalvalue=Ffvalue;
	termduration=Ftermduration;
	durationperiod = world.returntimeperiod() + Ftermduration; //period in which the fincial product will expire 
	startingduration = world.returntimeperiod()  // time period inwhich this product was created 
	period = durationperiod - startingduration; // period that the fincnancial product is within now. 
}

//return value to illustate polymorphism
double Financialproduct::get_value()
{
	return principalvalue;
}


//set the parent class when declaring chuld class;

void Financialproduct::set_name(std::string Sname)
{
	name=Sname;
}
void Financialproduct::set_pvalue(double Spvalue)
{
	principalvalue=Spvalue;
}

void Financialproduct::set_fvalue(double Ffvalue)
{
	finalvalue=principalvalue;//*(1/* + a rate set by bank/**/ );
}

void Financialproduct::set_term(int Stermduration)
{
	termduration=Stermduration;
}
string Financialproduct::get_name()
{
	return name;
}

void Financialproduct::updatetime()
{
	Period = (Economy.returntimeperiod - startingduration) 
	

}


Financialproduct::~Financialproduct()
{
	//deleters
}



//side note, when declaring input just use setting constructor