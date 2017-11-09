// cpa_lab_5_3_10_(8)-A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
class Point2D {
public:
	Point2D(double x, double y);
	double distanceTo(Point2D that);
private:
	double x;
	double y;
};
Point2D::Point2D(double x1, double y1) {
	x = x1;
	y = y1;
}
double Point2D::distanceTo(Point2D t) {
	return sqrt(pow((this->x - t.x), 2) + pow((this->y - t.y), 2));
}
// implement Point2D methods

int main()
{
	string coo;
	double x, y;
	getline(cin,coo);
	stringstream ss; 
	ss << coo;
	ss >> x;
	ss >> y;
	Point2D p1(x, y);

	getline(cin, coo);
	stringstream q;
	q << coo;
	q >> x;
	q >> y;
	Point2D p2(x, y);
	cout << p1.distanceTo(p2) << endl;


    return 0;
}

