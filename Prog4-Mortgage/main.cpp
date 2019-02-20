#include<iostream>
#include"Mortgage.h"
#include<string>
using namespace std;
bool parsedouble(string sval, double& val);
bool parseint(string sval, int& val);

int main()

{
	mortgage objM;//an object of the class 

	double loan;//laon that we promt the  loan
	double rate;//rate that we promt the rate
	int year;//rate that we promt the year
	string inputloan,inputrate,inputyear;// this are string values that help us to validate the users input and give them another chance

	cout << "Enter the loan amount " << endl;
	getline (cin, inputloan);
	while (!parsedouble(inputloan, loan))
	{
		parsedouble(inputloan, loan);
		cout << "Invalid input, please enter a valid number" << endl;
		getline(cin, inputloan);
	}
	objM.setLoan(loan);

	cout << "Enter the interest rate " << endl;	

	getline(cin, inputrate);
	while (!parsedouble(inputrate, rate))
	{
		parsedouble(inputrate, rate);
		cout << "Invalid input, please enter a valid number" << endl;
		getline(cin, inputrate);
	}
	
	objM.setRate(rate);


	cout << "Enter the year " << endl;
	getline(cin, inputyear);

	while (!parseint(inputyear, year))
	{
		parseint(inputyear, year);
		cout << "Invalid input, please enter a valid number" << endl;
		getline(cin, inputyear);
	}

	objM.setYears(year);
	cout << "Your monthly payment is " << "$" << objM.getmonthlyPayment() << endl;
	cout << "Total Payment is " << " $" << objM.gettotalPayment() << endl;
	return 0;
}
//this function Validate users input for the loan and interest rate
//it accept the users input and change and pass a number value
//it return a bool
bool parsedouble(string sval, double& val)
{
	double num;
	bool success = true;
	try
	{
		num = stod(sval);  
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}
//this function Validate users input for the year
//it accept the users input and change and pass a number value
//it return a bool
bool parseint(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}