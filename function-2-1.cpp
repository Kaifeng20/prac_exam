#include<iostream>
#include<string>
using namespace std;

string month_lookup(int day){
    
    string mts[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
                
    string result;
    
    if(day <1 || day>12)
        result="invalid month";
    else
        result = mts[day-1];
        
    return result;
}

