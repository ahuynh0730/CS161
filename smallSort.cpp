/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/11/2018
** Description:  Sorts 3 integers by reference from smallest to largest
*******************************************************************************/

/*
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void smallSort(int&, int &, int&);*/


//commenting out the main function
/*
int main() {

	//getting 3 integers from user
	cout << "Please enter 3 integers." << endl;
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	smallSort(num1, num2, num3);
	cout << num1 << ", " << num2 << ", " << num3;

	return 0;
}
*/


void smallSort(int &num1, int &num2, int &num3) {

	cout << "This program is in smallSort" << endl;
	//to create a variable to hold number while swapping
	int tempNum;

	//to find smallest and put it as num1, if num1 is already smallest, nothing needs to be done
	//if num2 is smallest
	if ((num2 < num1) && (num2 < num3))
	{
		tempNum = num1;
		num1 = num2;
		num2 = tempNum;
	}

	//if num3 is smallest
	else if ((num3 < num1) && (num3 < num2))
	{
		tempNum = num1;
		num1 = num3;
		num3 = tempNum;
	}

	//to find largest and put it as num3, if num3 is already largest, nothing needs to be done
	//if num1 is largest
	if ((num1 > num2) && (num1 > num3))
	{
		tempNum = num3;
		num3 = num1;
		num1 = tempNum;
	}

	//if num2 is largest
	else if ((num2 > num1) && (num2 > num3)) {
		tempNum = num3;
		num3 = num2;
		num2 = tempNum;
	}


}




