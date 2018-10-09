#include "Financialproduct.h"


//default constructor
Financialproduct::Financialproduct()
{
	name="?";
	principalvalue=0;
	finalvalue=0;
	termduration=0;
}

Financialproduct::Financialproduct(std::string Fname,double Fpvalue, double Ffvalue, int Ftermduration)
{
	name=Fname;
	principalvalue=Fpvalue;
	finalvalue=Ffvalue;
	termduration=Ftermduration;
	
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

void Financialproduct::set_fvalue(double Sfvalue)
{
	finalvalue=Sfvalue;
}

void Financialproduct::set_term(int Stermduration)
{
	termduration=Stermduration;
}
/*
void Financialproduct::set_bank(Bank* bank_name)
{
	financial_provider=bank_name;
}
/**/



Financialproduct::~Financialproduct()
{
	//deleters
}



//side note, when declaring input just use setting constructor