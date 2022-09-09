#include <iostream>
using namespace std;
#ifndef Unit_h
#define Unit_h

clsaa Unit
{
private:
    int numberOfBedrooms;
    double area;
    int value;

public:
    Unit();                                               // a default constructor 
    Unit(int unit_val, int num_beds, double unit_size);   // a constructor that takes: the value in dollars,
                                                        // number of bedrooms, and number of square meters as params

    int get_num_bedrooms();                               // returns the number of bedrooms for the unit
    int get_value();                                      // returns the value in dollars of the Unit
    double get_area(); 
};
#endif