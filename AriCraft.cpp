#include 'AirCraft.h'

AirCraft::AirCraft(){
    set_weight(w);
    set_feul(f);
    set_numberOfFlights(n);

}
void AirCraft::refuel()
{
    this -> refuel = 100;
}
void AirCraft::set_fuel(float f){
    this -> f = 0;
}

float AirCraft:: get_feul(){
    this -> feul;
}

void AirCraft::fly(int headwind, int minutes){};

