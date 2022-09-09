#include <iostream>
using namespace std;
#include "unit.h"
#include "ApartmentBuilding.h"

int main()
{
    // create units
    Unit unit1(2, 800.00, 100000);
    cout << unit1.toString() << endl;
    Unit unit2(3, 1200.00, 120000);
    Unit unit3(1, 500.00, 66000);
    Unit unit4(2, 900.00, 100000);
    Unit unit5(1, 600.00, 80000);
    // get_area
    cout << "Area: " << unit1.get_area() << endl;
    // get_bedrooms
    cout << "Bedrooms: " << unit1.get_bedrooms() << endl;
    // get_value
    cout << "Value: " << unit1.get_value() << endl;

    // Condo with capacity 4
    Condo condominium(4);
    // add_unit
    condominium.add_unit(unit1);
    condominium.add_unit(unit2);
    condominium.add_unit(unit3);
    condominium.add_unit(unit4);
    // adding a 5th unit should return false
    cout << condominium.add_unit(unit5) << endl;
    // toString
    cout << condominium.toString() << endl; // should print only 4 units
    // get_current_number_of_units
    cout << "Current units: " << condominium.get_current_number_of_units() << endl;
    // capacity
    cout << "Capacity: " << condominium.get_capacity() << endl;
    // returns a pointer to Unit
    Unit *units = condominium.get_contents();
    int i = 0;
    while (i < condominium.get_current_number_of_units())
    {
        // prints each unit
        cout << units[i].toString() << endl;
        i++;
    }
    return 0;
}