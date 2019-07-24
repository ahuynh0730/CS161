#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void smallSort2(int* ,int* , int* );
void transformArray(int *&, int);

int main() {
	/*int first = 14;
	int second = -90;
	int third = 2; 
	smallSort2(&first, &second, &third);
	cout << first << ", " << second << ", " << third << endl;*/

	
	int* myArray = new int[3];
	myArray[0] = 4;
	myArray[1] = 2;
	myArray[2] = 5;

	transformArray(myArray, 3);

	for (int i = 0; i<6; i++)
		cout << myArray[i] << endl;

	delete[]myArray;
	myArray = NULL;

	return 0;
}

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
	delete[] myArray;
	myArray = NULL;

	myArray = newArray;
}