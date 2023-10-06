// Vehicle.cpp
#include "Vehicle.h"

Vehicle::Vehicle() : speed(0), gear(1) {}

Vehicle::~Vehicle() {}

void Vehicle::accelerate(int increment) {
    speed += increment;
}

void Vehicle::brake(int decrement) {
    speed -= decrement;
    if (speed < 0)
        speed = 0;
}

void Vehicle::shiftGear(int newGear) {
    gear = newGear;
}
