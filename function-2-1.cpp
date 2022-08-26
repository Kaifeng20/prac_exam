#include<iostream>
#include<string>
using namespace std;

string string month_lookup(int day){
    
    string mts[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep",
                    "Oct","Nov","Dec"};
                
    string result;
    
    if(month<1 || month>12)
        result="invalid month";
    else
        result = mts[month-1];
        
    return result;
}

