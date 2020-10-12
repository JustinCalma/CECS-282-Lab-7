//Implementation file circleTypeImp.cpp

#include <iostream>
#include "circleType.h"
using namespace std;

// Print the values of the object circleType
void circleType::print() const {
	
	// Override the print method from pointType; Print the center of the circle
	cout << "Center: ";
	pointType::print();
	cout << endl;
	
	// Print the radius, circumference, and area values 
	cout << "Radius: " << radius << endl;
	cout << "Circumference: " << getCircumference() << endl;
	cout << "Area: " << getArea() << endl;

}

// Setter for radius
void circleType::setRadius(double r) {
	
	radius = r;

}

// Getter for radius
double circleType::getRadius() const {
	
	return radius;

}

// Calculate the circumference and Getter for circumference
double circleType::getCircumference() const {
	
	return (2 * 3.1416 * radius);

}

// Calculate the area and Getter for area
double circleType::getArea() const {

	return (3.1416 * radius * radius);

}

// Constructor of circleType; Calls the constructor of pointType
circleType::circleType(double x, double y, double r):pointType(x,y) {
	
	radius = r;

}
