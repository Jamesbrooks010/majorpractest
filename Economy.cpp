#include"Economy.h" 

#include<string> 
using namespace std; 

Economy::Economy()
{
	timeperiod = 0; //time period the economy is in, begining 0?, 1 , 2 , 3, 4, ::could be interpreted as years of quaters??
	name = "?"; // name of economy i.e australia, america 
	interestrate = 0; //global cash rate 
	aggsav = 0; //all cash savings in the economy 
	aggdebt = 0; 
} 
Economy::Economy(string econame)
{
	timeperiod = 0; 
	name = econame; 
	interestrate = (aggdebt / aggsav)/100; 
	aggsav = 0; 
	aggdebt = 0; 
}
int Economy::interestrateset() 
{

}
int Economy::settime(int timeperiodset)
{
	timeperiod = timeperiodset
}
int Economy::get_interestrate()
{
	return interestrate; 
}
double Economy::get_aggsav()
{
	return aggsav; 
}
double Economy::get_aggdebt()
{
	return aggdebt; 
}
int Economy::returntimeperiod() 
{
	return timeperiod;  
}
int Economy::moveforwardoneyear() 
{
	timeperiod = timeperiod + 1; 
}
Economy::~Economy()
{

}
