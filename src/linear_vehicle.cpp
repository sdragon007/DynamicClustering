#include "linear_vehicle.h"
#include "macro.h"

LinearVehicle::LinearVehicle() : Vehicle() {

}

LinearVehicle::LinearVehicle(int id, double minv, double maxv, mt19937* mr, PointNetwork* net) : Vehicle() {
	index = id;
	randGen = mr;
	minV = minv;
	maxV = maxv;
	network = net;
	setV();
	setSrcDst();
}

LinearVehicle::~LinearVehicle() {

}

void LinearVehicle::move() {

}

void LinearVehicle::setSrcDst() {
	vector <Point*> v = network->randomPoints(2);
	source = v[0];
	destination = v[1];
	current = *source;
	direction = *destination;
	int d=direction.coordinates.size();
	double s=0;
	for (int i=0; i<d; ++i) {
		direction.coordinates[i] -= source->coordinates[i];
		s += sqr(direction.coordinates[i]);
	}
	s = sqrt(s);
	for (int i=0; i<d; ++i) {
		direction.coordinates[i] /= s;
	}
}
