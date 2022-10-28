#ifndef PASSENGER_H
#define PASSENGER_H
#include "AirCraft.h"

/*
*   The class PassengerAircraft is a subclass of aircraft
*/
class PassengerAirCraft : public AirCraft
{
private:
    // since this is a passenger aircraft
    int numberOfPassengers;

public:
    // constructor
    PassengerAirCraft(string, int, int, int);
    // getters and setters
    int getNumberOfPassengers();

    // implement the virtual function of base class
    int get_speed();
};

#endif