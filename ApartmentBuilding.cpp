#include "Unit.h"
#include "ApartmentBuilding.h"

// default constructor allocates capacity for 10 units
ApartmentBuilding::ApartmentBuilding()
{
    max_capacity = 10; // default capacity
    // initializes a dynamically allocated array with default capacity
    units = new Unit[max_capacity]();
    // sets size to 0
    size = 0;
}

// constructor for ApartmentBuilding with given num units
ApartmentBuilding::ApartmentBuilding(int capacity)
{
    this->max_capacity = capacity;
    // initialize a dynamically allocated array with given capacity
    units = new Unit[capacity]();
    // sets size to 0
    size = 0;
}

// returns the  number of units allowed
int ApartmentBuilding::get_capacity()
{
    return max_capacity;
}

Unit * ApartmentBuilding:: get_contents()
{
    return units;
}


// returns the current number of units in the apartment building
int ApartmentBuilding::get_current_number_of_units()
{
    return size;
}

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
bool ApartmentBuilding::add_unit(Unit unit)
{
    // returns false if the capacity has reached
    if (size == max_capacity) return false;
    // fill the array at the current size
    units[size] = unit;
    size++;
    return true;
}

// destructor
ApartmentBuilding::~ApartmentBuilding()
{
    // frees the dynamically allocated array
    delete[] units;
}

