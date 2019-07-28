## Project 7.a

Write a function called findMedian that takes two parameters - an array of int and the size of the array.  The function should return the median of the array, which will require sorting the array (you can use the built-in sort function from the examples).  This will change the original array, but that's okay for this assignment.  If you're not familiar with calculating the median, please look that up.  Remember that it's different for odd and even groups of values.

The file must be named: findMedian.cpp.

 

## Project 7.b

Write a class called Person that has two data members - a string variable called name and a double variable called age.  It should have a constructor that takes two values and uses them to initialize the data members.  It should have get methods for both data members (getName and getAge), but doesn't need any set methods.

Write a separate function (not part of the Person class) called stdDev that takes two parameters - an array of Person objects and the size of the array - and returns the standard deviation of all the ages (the population standard deviation that uses a denominator of N, not the sample standard deviation, which uses a different denominator).  

The files must be named Person.hpp, Person.cpp and stdDev.cpp.
