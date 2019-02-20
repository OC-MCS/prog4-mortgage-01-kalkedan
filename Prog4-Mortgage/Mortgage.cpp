#include<iostream>
#include"Mortgage.h"
#include<cstdlib>

mortgage::mortgage()
{
	monthlyPayment= 0;
}

void  mortgage::setLoan(double l)
{
	loan = l;


}
void mortgage::setYears(int y)
{
	years = y;
}



void mortgage::setRate(double r)
{
	rate = r;
}
// this function claculate the value of monthly payment
//It returns and set a monthly payment to the private mem
double mortgage::getmonthlyPayment()
{
	int power = (12 * years);
	double base = (1 + (rate / 12));
	double term = pow(base, power);
	monthlyPayment = (loan * (rate / 12)*term) / (term - 1);
	return monthlyPayment;
}
//This member function calculate the total payment the users would be paying 
double mortgage::gettotalPayment()
{
	return  (monthlyPayment*years*12);
}

