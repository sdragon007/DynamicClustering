#ifndef _Vehicle
#define _Vehicle

#include "point_network.h"

class Vehicle {
	public:
		mt19937* randGen;
		int index;
		Point *source,
			*destination,
			direction,
			current;
		double velocity,
			minV,
			maxV;
		PointNetwork* network;

		Vehicle();
		virtual ~Vehicle();

		virtual void move();
		void setV();
		virtual void setSrcDst();
		virtual void printInformation();
};
#endif
