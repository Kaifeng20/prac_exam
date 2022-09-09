#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
    num = 0;
    area = 0.0;
    value = 0;
}

Unit::Unit(int unit_val, int num_beds, double unit_size)
{   
    value = unit_val;
    num = num_beds;
    area = unit_size;
}

int Unit::get_num_bedrooms()
{
    return num;
}

int Unit::get_value()
{
    return value;
}

double Unit::get_area()
{
    return area;
}