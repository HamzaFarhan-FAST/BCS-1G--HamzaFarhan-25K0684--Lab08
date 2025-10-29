#include <stdio.h>

int main(){

    int year[][12] = {
        {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
    }; 
    int row = 0, col = 0;
    for (row; row < 2; row++)
    {
        for (col; col < 12; col++)
        {
            printf("Year %d, Month %d: %d photos\n", row+1,col+1, year[row][col]);
        }
        col = 0;
    }
    
}