#ifndef VEHICLE_H
#define VEHICLE_H

/*
 * This veehicle file provdes the methods and variables of our vehicle class.
 * The default constructor will initialize a vehicle based on a random integer, 
 * and it's proposed type of movement will be initialized the same way. 
 *
 */
#include "Random.h"
#include <iostream>

class Vehicle
{
	public:	
		// variables
		enum movementTypes { straight, left, right };
		enum vehicleTypes { car, SUV, truck };

		// default constructor
		// Pick
		inline Vehicle() { 
			myMovement= movementTypes(Random::randInt(0,2)); 
			myVehicle = vehicleTypes(Random::randInt(0,2));
			myLength = myVehicle + 2;
		}
		
		inline void print() {
			cout << "myVehicle = " << myVehicle << endl;
			cout << "myLength = " << myLength << endl;
			cout << "myMovement = " << myMovement << endl << endl;}

	private:				
		int myLength;  				// length of vehicle
		vehicleTypes myVehicle; 	// type of vehicle
		movementTypes myMovement;	// type of movement
		vector<int> positionInRoad; // location of road on vehicle

};
#endif