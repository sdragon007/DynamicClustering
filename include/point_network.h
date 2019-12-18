#ifndef _PointNetwork
#define _PointNetwork

#include "point.h"
#include "network.h"
using namespace std;

class PointNetwork : public Network{
	public:
		int numPoints,
		    dimension;
		vector <Point> points;

		PointNetwork();
	    PointNetwork(char *fileName, mt19937* mr, bool std);
		~PointNetwork();

		void standardize();
		int randomIndex();
		int randomIndex(set <int> &indexToExclude);
		vector <Point*> randomPoints(int n);
};
#endif
