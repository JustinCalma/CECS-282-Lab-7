//Implementation file cylinderTypeImp.cpp

#include <iostream>
#include <fstream>
#include "cylinderType.h"
#include <cmath>
using namespace std;

// Print the values of the object cylinderType; Overrides circleType print method
void cylinderType::print() const {

	// Call the print method in circleType
	circleType::print();
	
	// Override it, and print the values of the cylinder object
	cout << "Cylinder Height: " << height << endl;
	cout << "Cylinder Surface Area: " << getSurfaceArea() << endl;
	cout << "Cylinder Volume: " << getVolume() << endl;

}

// Setter for the height
void cylinderType::setHeight(double h) {
	
	height = h;
	
}

// Setter for the center of the base
void cylinderType::setBaseCenter(double x, double y) {
	
	setPoint(x, y);
	
}

// Setter for the center, radius, and height
void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {
	
	setPoint(x, y);
	setRadius(r);
	setHeight(h);
	
}

// Getter for height
double cylinderType::getHeight() const {

	return height;

}

// Calculate the volume; Getter for the volume
double cylinderType::getVolume() const {

	return (getArea() * height);

}

// Calculate the surface area; Getter for the surface area
double cylinderType::getSurfaceArea() const {

	return ( (getCircumference() * height) + (2 * getArea()) );

}

// Constructor for cylinderType; Calls constructor of circleType
cylinderType::cylinderType(double x, double y, double r, double h):circleType(x, y, r) {
	
	height = h;
	
}


