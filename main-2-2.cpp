#include <iostream>
using namespace std;

extern  int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    
    int array[5] = {1,0,0,1,0}; 
    
    cout<<bin_to_int(array,5);
    cout<<endl;
}