//Weekly Net Pay
//Calculates the weekly net pay of an hourly employee

#include <iostream>
using namespace std;

int main()
{
	//Declare constant 
	constexpr double DED_RATE = 0.333; //For a 33.3% Deduction Rate

	//Declare variables
	int hrsWorked;
	double netPay;
	double payRate;
	double grossPay;
	double dedAmount;

	//Get user input for hours worked and pay rate
	cout << "Enter your current rate of pay: ";
	cin >> payRate;
	cout << "Enter your number of hours worked this week: ";
	cin >> hrsWorked;

	//Calculate gross pay based on user input
	grossPay = hrsWorked * payRate;

	//Caclulate deductions from gross pay
	dedAmount = grossPay * DED_RATE;

	//Caculate net pay
	netPay = grossPay - dedAmount;

	//Display output 
	cout << "Pay Rate: $"         << payRate << endl;
	cout << "Hours Worked: "      << hrsWorked << endl;
	cout << "Gross Pay: $"        << grossPay << endl;
	cout << "Deduction Amount: $" << dedAmount << endl;
	cout << "Net Pay: $"          << netPay << endl;
	return 0;
}




