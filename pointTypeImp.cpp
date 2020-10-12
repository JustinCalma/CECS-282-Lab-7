//Implementation File pointTypeImp.cpp

#include <iostream>
#include "pointType.h"
using namespace std;

// Setter for the x and y coordinate
void pointType::setPoint(double x, double y) {
	
	xCoordinate = x;
	yCoordinate = y;

}

// Print the x and y coordinates 
void pointType::print() const {

	cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;

}

// Getter for the x coordinate
double pointType::getX() const {

	return xCoordinate;

}

// Getter for the y coordinate
double pointType::getY() const {

	return yCoordinate;

}

// Constructor for pointType object
pointType::pointType(double x, double y) {

	xCoordinate = x;
	yCoordinate = y;

}
