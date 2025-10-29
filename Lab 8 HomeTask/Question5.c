#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    printf("Cold spots found:\n");

    
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            int current = temp[row][col];
            int isCold = 1; 

           
            if (row > 0 && temp[row - 1][col] <= current)
                isCold = 0;

            
            if (row < 3 && temp[row + 1][col] <= current)
                isCold = 0;

            
            if (col > 0 && temp[row][col - 1] <= current)
                isCold = 0;

            
            if (col < 3 && temp[row][col + 1] <= current)
                isCold = 0;

            if (isCold)
                printf("At position (%d,%d) with temperature %dC\n", row + 1, col + 1, current);
        }
    }

    return 0;
}
