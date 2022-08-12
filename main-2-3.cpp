
#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(){
    
    
    int integers[6] = {4,5,4,4,5,4};
    cout << "Sum of elements: " << sum_integers(integers, 6);
    cout << endl << endl;
    if( palindrome_sum(integers, 6) == -2)
    {
        cout << "not palindrome " << endl;
    }    
    else
    {
        cout << "sum of palindrome: " << palindrome_sum(integers, 6);
        cout << endl << endl;    
    }
}
