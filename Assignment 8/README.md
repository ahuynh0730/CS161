Project 8.a

Write a void function named smallSort2 that takes as parameters the addresses of three int variables and sorts the ints at those addresses into ascending order. For example if the main method has:

     int first = 14;

     int second = -90;

     int third = 2;

     smallSort2(&first, &second, &third);

     cout << first << ", " << second << ", " << third << endl;



Then the output should be:

-90, 2, 14

This can be very similar to your previous smallSort program, but uses pointers instead of references.

The file must be named smallSort2.cpp.

 

Project 8.b

Write a void function called transformArray that takes two parameters - a reference to a pointer to a dynamically allocated array of ints, and the size of that array.  The pointer is passed by reference because you want to change the value of the pointer.  The function should dynamically allocate an array that is twice as long, filled with the values from the original array followed by each of those values plus one.  For example, if the array that was passed in was {4, 2, 5}, then it should be replaced by {4, 2, 5, 5, 3, 6}.  The address of the new array should be assigned to the pointer that was passed as a parameter.  The function should prevent any memory leaks.  Remember to also prevent memory leaks in the main you use for testing.

For example, it could be used like this:

     int* myArray = new int[3];

     myArray[0] = 4;

     myArray[1] = 2;

     myArray[2] = 5;

     transformArray(myArray, 3);
  
     for (int i=0; i<6; i++)

       cout << myArray[i] << endl;

     delete []myArray;
The file must be named transformArray.cpp.

