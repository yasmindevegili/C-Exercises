#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[LIN][COL], b[LIN][COL], c[LIN][COL];
	int i, j;
	
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			a[i][j] = rand() % 100;
			
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			b[i][j] = rand() % 100;
		
	printf("Matriz a:\n");	
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", a[i][j]);
			printf("\n");
	}
	printf("Matriz b:\n");		
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", b[i][j]);
			printf("\n");
	}
			
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			c[i][j] = a[i][j] + b[i][j];
	
	printf("Matriz c:\n");
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", c[i][j]);
			printf("\n");
	}
			
			
	return 0;
}
