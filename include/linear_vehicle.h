#ifndef _LinearVehicle
#define _LinearVehicle

#include "vehicle.h"

class LinearVehicle : public Vehicle {
	public:
		LinearVehicle();
		LinearVehicle(int id, double minv, double maxv, mt19937* mr, PointNetwork* net);
		~LinearVehicle();

		void move();
		void setSrcDst();
};
#endif
