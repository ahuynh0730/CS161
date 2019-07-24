#include <iostream>
#include "Person.hpp"


using std::cout;
using std::endl;

double findMedian(int[], int);
double stdDev(Person[], int);

int main() {
	/*
	int array1[] = {23,  5, -10, 0, 0, 321, 1, 2, 99, 30 };
	int size = 10;
	findMedian(array1, size);
	*/

	Person person[4] = { Person("Joe", 4),
						Person("Eric", 6),
						Person("Erica",7),
						Person("Erin", 8) };
	stdDev(person, 4);
	//Person person1("Joe",4);
	//cout << endl << person1.getName() << endl << person1.getAge();
	

	//system("pause");
	return 0;
}