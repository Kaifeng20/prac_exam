#include <iostream>
using namespace std;
#include "Unit.h"
#include "ApartmentBuilding.h"

int main()
{
    // create units
    Unit unit1(2, 800.00, 100000);
    cout <<unit1.get_num_bedrooms()<<unit1.get_area()<<unit1.get_value() << endl;
    Unit unit2(3, 1200.00, 120000);
    Unit unit3(1, 500.00, 66000);
    Unit unit4(2, 900.00, 100000);
    Unit unit5(1, 600.00, 80000);
    // get_area
    cout << "Area: " << unit1.get_area() << endl;
    // get_bedrooms
    cout << "Bedrooms: " << unit1.get_num_bedrooms() << endl;
    // get_value
    cout << "Value: " << unit1.get_value() << endl;

    // Condo with capacity 4
    ApartmentBuilding ab(4);
    // add_unit
    ab.add_unit(unit1);
    ab.add_unit(unit2);
    ab.add_unit(unit3);
    ab.add_unit(unit4);
    // adding a 5th unit should return false
    cout << ab.add_unit(unit5) << endl;

    // get_current_number_of_units
    cout << "Current units: " << ab.get_current_number_of_units() << endl;
    // capacity
    cout << "Capacity: " << ab.get_capacity() << endl;
    // returns a pointer to Unit
    Unit *units = ab.get_contents();
    int i = 0;
    while (i < ab.get_current_number_of_units())
    {
        // prints each unit
        cout << units[i].get_num_bedrooms()<<units[i].get_area()<<units[i].get_value() << endl;
        i++;
    }
    return 0;
}