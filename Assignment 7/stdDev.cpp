/*******************************************************************************
** Author:       Anthony Huynh
** Date:         07/25/18
** Description:  To calculate the standard deviation of the ages given an array of 
**					Person and size of array
*******************************************************************************/

#include "Person.hpp"
#include <vector>
#include <cmath>

using std::vector;




double stdDev(Person person[], int arraySize)
{
	double mean = 0, deviationSum = 0, variance = 0, standardDeviation = 0;
	//to sum the mean up before dividing by array size
	for (int i = 0; i<arraySize; i++)
	{
		mean += person[i].getAge();
	}
	
	//to divide sum by array size to get mean
	mean /= arraySize;

	//creating a vector of doubles to hold each deviation
	vector<double> deviations(arraySize);

	//loop to store deviations in vector
	for (int i = 0; i < arraySize; i++)
	{
		//subtracting mean from each data point
		deviations[i] = person[i].getAge() - mean;

		//squaring each deviation to make deviations positive
		deviations[i] *= deviations[i];
	}

	//loop to determine deviation sum
	for (int i = 0; i < arraySize; i++)
	{
		deviationSum += deviations.at(i);
	}

	//dividing deviation sum by number of data points to get variance
	variance = deviationSum / arraySize;

	//to get standard deviation by taking square root of the variance
	standardDeviation = sqrt(variance);

	return standardDeviation;
}