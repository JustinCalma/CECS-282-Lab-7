//Class cylinderType

#ifndef H_CylinderType
#define H_CylinderType
#include "circleType.h"

// Create cylinderType class; Inherits circleType class
class cylinderType: public circleType {
	
	// Delcare the public methods 
	public:
		void print() const;
		
		void setHeight(double h);
		void setBaseCenter(double x, double y);
		void setCenterRadiusHeight(double x, double y, double r, double h);
		
		double getHeight() const;
		double getVolume() const;
		double getSurfaceArea() const;
		cylinderType(double x = 0.0, double y = 0.0, double r = 0.0, double h = 0.0);

	// Declare the protected attribute
	protected:
		double height;

};
#endif
