#include <stdio.h>

int main(){
	
	printf("Classroom Seating Chart:\n");
	printf("========================\n");
	printf("x = Student, o = Empty\n");
	printf("\n");
	int i,row = 1, xcount = 0, ocount = 0;
	char sign = 'x';
	
	for(row;row< 6; row++){
		
		printf("Row %d", row);
		
		i = 0;
		for(i; i < 5; i++){
			printf(" %c ", sign);
			if(sign == 'x'){
				sign = 'o';
				xcount++;
			}
			else{
				sign = 'x';
				ocount++;
			}
		}
		printf("\n");
	}
	
	printf("\nSummary:\n");
	printf("Students Seated : %d\n", xcount);
	printf("Empty Desks: %d\n", ocount);
	printf("Total Desks: %d\n", xcount + ocount);
	
	
	
	return 0;
}
