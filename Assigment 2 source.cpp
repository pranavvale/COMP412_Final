// main.cpp
#include "Car.h"
#include <iostream>
#include <stdexcept>
#include <cassert>

int main() {
    try {
        const int numCars = 5;  // Number of cars in the race
        Car* cars[numCars];     // Array of Car pointers

        // Initialize cars
        for (int i = 0; i < numCars; ++i) {
            cars[i] = new Car();
        }

        // Simulate the race
        for (int i = 0; i < 100; ++i) {  // Simulate 100 time steps
            for (int j = 0; j < numCars; ++j) {
                // Randomly accelerate each car
                int acceleration = rand() % 10 + 1;  // Random speed increase between 1 and 10 mph
                cars[j]->accelerate(acceleration);
            }

            // Print the current speeds of the cars
            std::cout << "Time Step " << i + 1 << ":" << std::endl;
            for (int j = 0; j < numCars; ++j) {
                std::cout << "Car " << j + 1 << " Speed: " << cars[j]->speed << " mph" << std::endl;
            }

            // Check if any car has reached the finish line (e.g., speed >= 100 mph)
            for (int j = 0; j < numCars; ++j) {
                if (cars[j]->speed >= 100) {
                    std::cout << "Car " << j + 1 << " has won the race!" << std::endl;
                    // Cleanup and exit
                    for (int k = 0; k < numCars; ++k) {
                        delete cars[k];
                    }
                    return 0;
                }
            }
        }

        // Cleanup
        for (int i = 0; i < numCars; ++i) {
            delete cars[i];
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
