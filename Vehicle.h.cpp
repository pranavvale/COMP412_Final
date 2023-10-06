// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:
    Vehicle();
    virtual ~Vehicle();  // Virtual destructor for proper polymorphic behavior

    // Common data members
    int speed;
    int gear;

    // Member functions
    void accelerate(int increment);
    void brake(int decrement);
    void shiftGear(int newGear);
};

#endif

