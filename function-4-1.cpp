#include <iostream>
#include <climits>
using namespace std;

int* sum_left_right(int** vals, int num_rows, int num_cols) {
        int max = -INT_MAX;
        int min = INT_MAX;
        for(int i = 0; i < num_rows; i++) {
                for(int j = 0; j < num_rows; j++) {

                    if(vals[i][j] > max) {
                            max = vals[i][j];
                    }
                    if(vals[i][j] < min) {
                            min = vals[i][j];
                    }
                }
        }

        int* ret = new int[2];
        ret[0] = max;
        ret[1] = min;
        return ret;
}