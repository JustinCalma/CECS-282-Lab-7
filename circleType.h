//Class circleType

#ifndef H_CircleType
#define H_CircleType
#include "pointType.h"

// Create a circleType class; Inherits pointType class
class circleType: public pointType {
	
	// Declare public methods and constructor
	public:
		void print() const;
		void setRadius(double r);
		double getRadius() const;
		double getCircumference() const;
		double getArea() const;
		circleType(double x = 0.0, double y = 0.0, double r = 0.0);

	// Declare protected class attribute
	protected:
		double radius;
		
};
#endif
