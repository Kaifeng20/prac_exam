#include <iostream>
using namespace std;

int negative_count(int *vals,int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(vals[i]<0)
        count++;
    }

    return count;

}

int* extract_negatives(int *vals,int len, int num_negative)
{
    static int new_arr[sizeof num_negative]; // this is our dynamic array
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(vals[i]<0)
        {
            new_arr[j]=vals[i];
            j++;
        }
    }

    return new_arr;
}

