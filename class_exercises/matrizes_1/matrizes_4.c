#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[LIN][COL], b[COL] [LIN], c[LIN][LIN];
	int i, j;

	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			a[i][j] = rand() % 100;
	
	printf("Matriz a (%dx%d):\n", LIN, COL);
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", a[i][j]);
			printf("\n");
	}
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			b[i][j] = rand() % 100;
			
	printf("Matriz b (%dx%d):\n", COL, LIN);
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", b[i][j]);
			printf("\n");
	}
	
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			if(j=!)
			
	printf("Matriz c (%dx%d):\n", LIN, LIN);
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", c[i][j]);
			printf("\n");
	}
			
	return 0;
}
