#include<iostream>
using namespace std;
#define ROWS 3
#define COLS 3




int sum_left_right(int *vals, int num_rows, int num_cols)
{
	int sum=0;

	for (int i=0; i<num_rows; i++)
    	{
           	for (int j=0; j<num_cols; j++)
       	        {
		            if (j == 0  || j == num_rows - 1 )
		                {
		                    sum+=*((vals+i*num_cols) + j);
		                }	
       	        }
    	}
	return sum;
}

