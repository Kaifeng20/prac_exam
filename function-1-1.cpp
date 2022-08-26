#include <iostream>
using namespace std;

string* create_int_strings(int num_vals);{
    
    string* var = new string();
    
    for(int i=0;i<num_vals; i++)
        var[i]=i+48;
    
    return var;
}

void display_str_array(string *vals, int num_vals){
    
    for(int i=0;i<num_vals; i++)
        cout<<var[i]<<" ";
}
