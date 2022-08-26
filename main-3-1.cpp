#include<iostream>
using namespace std;

extern int negative_count(int *vals,int len);
extern int* extract_negatives(int *vals,int len, int num_negative);

int main()
{
    int arr[]={-2,-7,5,6,-8};

    int len=5;


    int num_negative=negative_count(arr,len);
    int *a = extract_negatives(arr,len,num_negative);
    cout<<"the array consisting of only negative values is: "<<endl;
    for(int i=0;i<num_negative;i++)

    {
        cout<<*(a+i)<<" ";
    }

    return 0;

}