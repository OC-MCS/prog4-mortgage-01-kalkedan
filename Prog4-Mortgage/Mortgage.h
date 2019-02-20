#pragma once
class mortgage
{
private:
	int years;
	double  monthlyPayment, loan, rate;
public:
	mortgage();

	double  getLoan() const;
	double  getRate() const;
	int  getYears() const;
	
	void setLoan(double);
	void setYears(int);
	void setRate(double);

	double getmonthlyPayment();
	double gettotalPayment();
	

};

