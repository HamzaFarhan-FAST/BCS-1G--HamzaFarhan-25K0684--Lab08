#include <stdio.h>

int main(){
	
	int i= 1, j = 1, tables;
	printf("How many tables you want: ");
	scanf("%d", &tables);
	
	printf("\n");
	printf("Multiplication Table from 1 to %d\n", tables);
	printf("------------------------------------\n");
	for(i; i < tables+1; i++){
		
		
		printf("%d : ", i);
		j = 1;
		while(j < 11){
			
			printf("%d ", i*j);
			j++;
			
			
		}
		printf("\n");
		
		
	}
	
	
	
	
	return 0;
}
