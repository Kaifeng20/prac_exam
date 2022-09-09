#include <iostream>
using namespace std;
#include "Unit.h"

int main()
{
    // create units
    Unit unit1(2, 78000, 800.32);
    cout << unit1.toString() << endl;
    Unit unit2(120000, 3, 1200.00);
    Unit unit3(50000, 4, 660.00);
    Unit unit4(90000, 6, 1000.00);
    Unit unit5(60000, 2, 800.00);

    // get_area
    cout << "Area: " << unit1.get_area() << endl;
    // get_bedrooms
    cout << "Bedrooms: " << unit1.get_num_bedrooms() << endl;
    // get_value
    cout << "Value: " << unit1.get_value() << endl;
}