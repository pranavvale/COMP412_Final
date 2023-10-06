// main.cpp
#include "Car.h"
#include <iostream>
#include <stdexcept>
#include <cassert>

int main() {
    try {
        Car* car = new Car();  // Dynamically allocate a Car object
        car->accelerate(20);  // Accelerate the car
        std::cout << "Current speed: " << car->speed << " mph" << std::endl;

        // Apply brakes multiple times
        car->brake(10);
        car->brake(5);
        car->brake(3);

        std::cout << "Current speed: " << car->speed << " mph" << std::endl;

        assert(car->speed >= 0);  // Using assert for runtime checks

        delete car;  // Release memory
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
