/*******************************************************************************
** Author:       Anthony Huynh
** Date:         07/25/18
** Description:  Method that will sort an array as well as find the median
*******************************************************************************/

#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;


double findMedian(int array1[], int arraySize)
{
	double median;

	//to sort array
	std::sort(array1, array1 + arraySize);

	//to determine median if size of array is odd
	if ((arraySize % 2) != 0)
	{
		/*sets median to the position of array size -1, then divided by 2
		**********ex: size of 7, median would be 4th number, but since index starts at 0, it 
		**********would need to be position 3, which is (7-1)/2 = 6/2 = 3*/

		median = array1[(arraySize -1) / 2];
	}

	//to determine median if size of array is even
	else
	{
		// adds the two middle integers together and divides by two to get the median
		
		median = (array1[(arraySize / 2) - 1] + array1[arraySize / 2]) / 2.0;
	}

	return median;
}

