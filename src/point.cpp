#include "point.h"
#include "macro.h"

Point::Point() {
    name = "";
    index = -1;
}

Point::Point(string n, vector <double> c, int i) {
    name = n;
    coordinates = c;
    index = i;
}

Point::~Point() {

}

double Point::distance(Point p) {
    double t=0, i;
    for (i=coordinates.size()-1; i>=0; --i) {
        t += sqr(coordinates[i] - coordinates[i]);
    }
    return sqrt(t);
}

void Point::standardize(double mn, double mx) {
    for (int i=coordinates.size()-1; i>=0; --i) {
        coordinates[i] = (coordinates[i] - mn) / (mx - mn);
    }
}

void Point::print() {
    printf("(");
    for (int i=0; i<coordinates.size(); ++i) {
        printf(" %.3f ", coordinates[i]);
    }
    printf(" )\n");
}
