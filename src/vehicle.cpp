#include "vehicle.h"
Vehicle::Vehicle() {

}

Vehicle::~Vehicle() {

}

void Vehicle::move() {

}

void Vehicle::setV() {
    if (minV+(1e-8)>=maxV) {
        //same velocity over all objects
        velocity = minV;
    }
    uniform_real_distribution<double> dist(minV, maxV);
    velocity = dist(*randGen);
    assert(velocity>=minV-(1e-18) && velocity<=maxV+(1e-18));
}

void Vehicle::setSrcDst() {

}

void Vehicle::printInformation() {
    printf("Vehicle index %d with current velocity %.3f\n", index, velocity);
    printf("\tsource: ");
    source->print();
    printf("\tdestination: ");
    destination->print();
    printf("\tcurrent position: ");
    current.print();
    printf("\tcurrent unit direction: ");
    direction.print();
}
