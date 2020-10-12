#ifndef H_PointType
#define H_PointType

// Create pointType class
class pointType {

	// Declare the public methods 
	public:
		void setPoint(double x, double y);
		void print() const;
		double getX() const;
		double getY() const;
		pointType(double x = 0.0, double y = 0.0);

	// Declare the protected attributes
	protected:
		double xCoordinate;
		double yCoordinate;
		
};
#endif
