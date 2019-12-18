#ifndef _Point
#define _Point

#include <bits/stdc++.h>
using namespace std;

class Point {
	public:
		string name;
		int index;
		vector <double> coordinates;

	Point();
	Point(string n, vector <double> c, int i);
	~Point();

	double distance(Point p);
	void standardize(double mn, double mx);
	void print();
};
#endif //_Points
