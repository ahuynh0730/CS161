/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/1/2018
** Description:  Gives user minimum amount of coins needed 
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declaring and initializing variables
	const int QUARTER = 25, DIME = 10, NICKEL = 5, PENNY = 1;
	int cents = 0, numbQuarters = 0, numbDimes = 0, numbNickels = 0, numbPennies = 0;

	//getting amount of cents from user
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cents;

	//calculating numbers of coins
	numbQuarters = cents / QUARTER;
	cents %= QUARTER;
	numbDimes = cents / DIME;
	cents %= DIME;
	numbNickels = cents / NICKEL;
	cents %= NICKEL;
	numbPennies = cents / PENNY;

	//displaying numbers of coins needed
	cout << "Your change will be:" << endl
		<< "Q: " << numbQuarters << endl
		<< "D: " << numbDimes << endl
		<< "N: " << numbNickels << endl
		<< "P: " << numbPennies << endl;


	return 0;
}