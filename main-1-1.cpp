#include<iostream>
using namespace std;

extern string* create_int_strings(int num_vals);
extern void display_str_array(string *vals, int num_vals);

int main(){
    string* str = create_strings(9);
    display_array(str,9);
    return 0;
    
}
