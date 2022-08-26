#include<iostream>
using namespace std;

extern int* sum_left_right(int **vals,int num_rows, int num_cols);
int main() {
        // creating a test case
        int row1[]={10,15,9};
        int row2[]={11,5,3};
        int row3[]={8,56,1};
        int *vals[]={row1,row2,row3};
        int ncols=3;
        int nrows=3;
        // function call
        int *mm = sum_left_right(vals, nrows, ncols);
        // outputting the returned array
        cout << mm[0] << " " << mm[1] << endl;
        return 0;
}