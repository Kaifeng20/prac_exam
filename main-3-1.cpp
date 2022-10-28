#include "AirCraft.h"
#include "passenger.h"
#include <iostream>

using namespace std;
int main()
{
    string type;
    cout << "Enter the type: ";
    cin >> type;

    // based on the correct type we can create an appropriate aircraft
    PassengerAirCraft aircraft(type, 10001, 2, 100);
    // print the details of the aircraft

    cout << "\nType: " << aircraft.get_type() << endl;
    cout << "Weight: " << aircraft.get_weight() << endl;
    cout << "length in service: " << aircraft.get_service() << endl;
    cout << "passenger capacity: " << aircraft.getNumberOfPassengers() << endl;
    cout << "The speed of the aircraft is: " << aircraft.get_speed() << endl;
}