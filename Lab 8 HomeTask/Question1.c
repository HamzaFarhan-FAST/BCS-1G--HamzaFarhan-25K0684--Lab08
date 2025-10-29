#include <stdio.h>

int main(){

    int class[][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };

    int total, row = 0, col = 0;
    float avg;
    for (row; row < 3; row++)
    {
        total = 0;
        for (col; col < 4; col++)
        {
            total += class[row][col];
        }
        col = 0;
        avg = (float)total/4;
        printf("The Average of Class %d is %f\n", row+1, avg);
    }

}