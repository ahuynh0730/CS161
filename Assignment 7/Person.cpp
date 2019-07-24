/*******************************************************************************
** Author:       Anthony Huynh
** Date:         07/25/18
** Description:  cpp file for Person including constructors and get methods for name and age
*******************************************************************************/

#include "Person.hpp"
#include <string>

//default constructor
Person::Person() 
{
	name = "";
	age = 0;
}

//constructor with two parameters for name and age
Person::Person(std::string nameIn, double ageIn)
{
	name = nameIn;
	age = ageIn;
}

//to get name
std::string Person::getName()
{
	return name;
}

//to get age
double Person::getAge()
{
	return age;
}
