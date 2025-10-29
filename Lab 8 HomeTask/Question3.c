#include <stdio.h>


int main() {
    int image[][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    
    int inverted[4][4];
    int whiteCount = 0;

    
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            inverted[row][col] = 1 - image[row][col];  
            if (image[row][col] == 1)
                whiteCount++;
        }
    }

    
    printf("Original Image\t\tInverted Image\n");
    
    for (int row = 0; row < 4; row++) {
        
        for (int col = 0; col < 4; col++) {
            printf("%d ", image[row][col]);
        }

        printf("\t\t");

        
        for (int col = 0; col < 4; col++) {
            printf("%d ", inverted[row][col]);
        }

        printf("\n");
    }

    printf("\nNumber of white pixels in the original image: %d\n", whiteCount);

    return 0;
}
