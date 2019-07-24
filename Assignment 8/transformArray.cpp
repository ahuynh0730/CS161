/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/2/2018
** Description:  Using an an array, creates a new array that is twice is long
**					and each new element is the original element plus 1
*******************************************************************************/

#include <iostream>

void transformArray(int *&myArray, int arraySize)
{
	//dynamically creating new array with double the size of original
	//and setting first half to elements of original array
	int *newArray = new int[arraySize * 2];
	for (int i = 0; i < arraySize; i++)
	{
		newArray[i] = myArray[i];
	}

	//filling rest of new array with original array plus 1
	for (int i = arraySize; i < arraySize * 2; i++)
	{
		newArray[i] = newArray[i - arraySize] + 1; 		
	}

	//deleting old dynamically allocated array and then
	//setting old pointer to new array
	delete [] myArray;
	myArray = NULL;

	myArray = newArray;
}







