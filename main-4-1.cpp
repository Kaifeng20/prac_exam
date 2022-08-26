#include<iostream>
using namespace std;
#define ROWS 3
#define COLS 3

extern int sum_left_right(int *vals,int num_rows, int num_cols);

int main()
{
	int vals[ROWS][COLS]={{10,15,9},{11,5,3},{8,56,1}};
	int result=sum_left_right((int *)vals,ROWS,COLS);
	cout<<"Sum = "<<result<<endl;
	return 0;
}