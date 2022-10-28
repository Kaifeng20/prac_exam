#ifndef AirCraft_H
#define AirCraft_H
#include<string>
#include <iostream>
using namespace std;
 
class AirCraft{
private:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;         // initially 0
        void refuel();               // Resets fuel back to 100%

public:
        AirCraft();

        AirCraft(int w);

        void set_fuel(); 
        float get_fuel();
        void set_weight();
        void get_weight();

        virtual void fly(int headwind, int minutes) = 0;
};

#endif