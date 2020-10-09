//Implementation file cylinderTypeImp.cpp

#include <iostream>
#include <fstream>
#include "cylinderType.h"
#include <cmath>
using namespace std;

void cylinderType::print() const {

	circleType::print();
	
	cout << "Cylinder Height: " << getHeight() << endl;
	cout << "Cylinder Surface Area: " << getSurfaceArea() << endl;
	cout << "Cylinder Volume: " << getVolume() << endl;

}

void cylinderType::setHeight(double h) {
	
	height = h;
	
}

void cylinderType::setBaseCenter(double x, double y) {
	
	pointType::setPoint(x, y);
	
}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {
	
	pointType::setPoint(x, y);
	circleType::setRadius(r);
	cylinderType::setHeight(h);
	
}

double cylinderType::getHeight() const {

	return height;

}

double cylinderType::getVolume() const {

	return (3.1416 * pow(circleType::getRadius(), 2) * getHeight());

}

double cylinderType::getSurfaceArea() const {

	return ( (2 * 3.1416 * circleType::getRadius() * getHeight()) + (2 * 3.1416 * pow(radius, 2)) );

}

cylinderType::cylinderType(double x, double y, double r, double h) {
	
	pointType::setPoint(x, y);
	circleType::setRadius(r);
	cylinderType::setHeight(h);
	
}

