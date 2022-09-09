#include <iostream>
using namespace std;
#include "Unit.h"

int main()
{
    Unit unit[1];

    unit[1] = Unit(2, 78000, 800.32);


    cout<<"number of bedrooms:"<< unit[1].get_num_bedrooms() <<endl;
    cout<<"Area is:" << unit[1].get_area() <<endl;
    cout<<"value is: "<< unit[1].get_value() <<endl;
}