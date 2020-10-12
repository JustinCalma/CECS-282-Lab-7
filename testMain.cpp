#include "cylinderType.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Definition of Main method
int main() {

	// Create 2 cylinder objects; 1 initalized object, another empty
	cylinderType cylinder1(3, 2.5, 4, 2.5);
	cylinderType cylinder2;
	
	// Set the precision and output 
	cout << fixed << showpoint;
	cout << setprecision(2);
	
	// Output the values of cylinder 1
	cout << "***** Cylinder 1 *****" << endl;
	cylinder1.print();
	cout << endl;
	
	// Set the values of cylinder 2
	cylinder2.setPoint(-2.5, 7);
	cylinder2.setRadius(4);
	cylinder2.setHeight(3.9);
	
	// Output the values of cylinder 2
	cout << "***** Cylinder 2 *****" << endl;
	cylinder2.print();
	cout << endl;
	
	// Create variables to store the values of cylinder 3
	double x, y;
	double r;
	double h;
	
	// Create a third cylinder object
	cylinderType cylinder3;
	
	// Get and store the x coordinate of the cylinder
	cout << "Enter x Coordinates of the center: ";
	cin >> x;
	cout << endl;
	
	// Get and store the y coordinate of the cylinder
	cout << "Enter y Coordinate of the center: ";
	cin >> y;
	cout << endl;
	
	// Get and store the radius of the base of the cylinder
	cout << "Enter base radius: ";
	cin >> r;
	cout << endl;
	
	// Get and store the height of the cylinder
	cout << "Enter cylinder height: ";
	cin >> h;
	cout << endl;
	
	// Set the user inputted values of teh cylinder
	cylinder3.setCenterRadiusHeight(x, y, r, h);
	
	// Output the values of cylinder 3
	cout << "***** Cylinder 3 *****" << endl;
	cylinder3.print();
	cout << endl;
	
	// Return 0 to the main method
	return 0;

}
