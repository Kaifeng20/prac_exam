#include<iostream>
using namespace std;

extern string month_lookup(int day);

int main()
{
    cout<< lookup_month(3) << endl;
    cout<< lookup_month(4) << endl;
    cout<< lookup_month(13) << endl;
    cout<< lookup_month(-5) << endl;
    cout<< lookup_month(1) << endl;
    cout<< lookup_month(9) << endl;
    
    return 0;
}
