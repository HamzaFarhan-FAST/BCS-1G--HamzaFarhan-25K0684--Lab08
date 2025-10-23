#include <stdio.h>

int main(){
	
	int matrix[3][3] =
	{
	{12, 34 ,56},
	{72, 4 ,6},
	{90, 67, 12}
	};
	
	int row = 0, col = 0, maximum = 0, maxrow = -1, maxcol = -1;
	for(row;row < 3;row++){
		
		col = 0;
		for(col;col < 3; col++){
			
			if(matrix[row][col] > maximum){
				
				maximum = matrix[row][col];
				maxrow = row;
				maxcol = col;
			}
			
			
		}
		
	}
	printf("The Maximum Element in the array is %d and the indexes are row = %d and col = %d", maximum,maxrow+1,maxcol+1);
	
	
	
	return 0 ;
}
