/*******************************************************************************
** Author:       Anthony Huynh
** Date:         07/25/18
** Description:  Person hpp file
*******************************************************************************/

#ifndef PERSON_hpp
#define PERSON_hpp

#include <string>

class Person
{
private: 
	std::string name;
	double age;

public:
	Person();
	Person(std::string, double);
	std::string getName();
	double getAge();
};


#endif 

