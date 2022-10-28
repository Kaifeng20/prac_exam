#ifndef AirCraft_H
#define AirCraft_H
#include<string>
using namespace std;
 
class AirCraft{
protected:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;         // initially 0
        string type;
        void refuel();               // Resets fuel back to 100%

public:
       //Default constructor
       AirCraft();
       //Parameterised constructor
       //Creates an AirCraft of type t, weight w, and length-in-service l
       AirCraft();

        void set_fuel(); 
        float get_fuel();

        virtual void fly(int headwind, int minutes) = 0;
};
#endif