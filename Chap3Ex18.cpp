/* File name: Chap3Ex18.cpp
* Author: Arriana Maldonado
* date: 9/21/2025
* purpose:Write a program that asks the user for the Principle amount, 
interest rate, and times the interest compounded. Then calculate the interest
accrued and the final balance of the account. Display all values
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double principal, rate, time, interest, finalBalance;
	cout << fixed << setprecision(2);
	cout << "Enter the principal amount: ";
	cin >> principal;
	cout << "Enter the interest rate (as a decimal): ";
	cin >> rate;
	cout << "Enter the times compounded (in years): ";
	cin >> time;

	finalBalance = principal * pow((1 + rate / time),time);
	interest = finalBalance - principal;

	cout << "Interest rate: " << rate * 100 << "%" << endl;
	cout << "Times interest compounded: " << time << endl;
	cout << "Principal amount: $" << principal << endl;
	cout << "Interest accrued: $" << interest << endl;
	cout << "Final balance: $" << finalBalance << endl;

	return 0;
}

