#include "Helicopter.h"
#include <string>

// implementation of constuctor of the passenger aircraft
PassengerAirCraft::PassengerAirCraft(string type, int w, int l, int p) : AirCraft(type, w, l)
{
    this->numberOfPassengers = p;
}

// getter method to get the number of passengers
int PassengerAirCraft::getNumberOfPassengers()
{
    return PassengerAirCraft::numberOfPassengers;
}

// method to get the speed of the specific aircraft
int PassengerAirCraft::get_speed()
{
    return 120;
}