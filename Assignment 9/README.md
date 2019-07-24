Write a class called Point that contains two doubles that represent its x- and y-coordinates. It should have get and set methods for both fields.  It should have a constructor that takes two double parameters and initializes its coordinates with those values. It should have a default constructor that initializes both coordinates to zero.  It should also contain a method called distanceTo that takes as a parameter another Point and returns the distance from the Point that was passed as a parameter to the Point that we called the method of. You will need to use sqrt(). For example at the end of the following, dist should be equal to 5.0:

    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);
    double dist = p1.distanceTo(p2);
Next, write a class called LineSegment that contains two Point-pointers, where each holds the address of a Point object that represents an endpoint of the LineSegment. It should have get and set methods for both fields and a constructor that takes the addresses of two Point objects and passes them to the set methods to initialize the data members. Your LineSegment constructor and set and get methods should only be working with Point-pointers - they shouldn't do anything with x- and y-coordinates.

LineSegment should also contain a method called length that returns the length of the LineSegment – by using the distanceTo method on its endpoints – and a method called slope that returns the slope of the LineSegment.  You don't need to do anything special for vertical lines - division by zero will result in the special value inf, which stands for "infinity".  Your program will not be tested with line segments where both endpoints have the same coordinates.  The LineSegement class might be used as follows:

    Point p1(4.3, 7.52);
    Point p2(-17.0, 1.5);
    LineSegment ls1(&p1, &p2);
    double length = ls1.length();
    double slope = ls1.slope();
 

The functions for the Point class should have the following names:

setXCoord, getXCoord

setYCoord, getYCoord

distanceTo

The functions for the LineSegment class should have the following names:

setEnd1, getEnd1

setEnd2, getEnd2

length

slope

The files must be named: Point.hpp, Point.cpp, LineSegment.hpp and LineSegment.cpp

Point.cpp and LineSegment.hpp should both #include Point.hpp.  LineSegment.cpp should #include LineSegment.hpp.  The main method you write for testing will also need to include LineSegment.hpp.  If you named the file with your main method "geomMain.cpp", then you can compile your program with "g++ Point.cpp LineSegment.cpp geomMain.cpp -o geom". 

