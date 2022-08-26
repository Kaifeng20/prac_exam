#include<iostream>
using namespace std;
extern string month_lookup(int day);

int main()
{
    cout << month_lookup(3) << endl;
    cout << month_lookup(4) << endl;
        
    return 0;
}
