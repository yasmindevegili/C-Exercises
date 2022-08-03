#include <stdio.h>
#include <stdlib.h>

#define LIN 8
#define COL 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m[LIN][COL], transp[COL][LIN];
	int i, j;
	
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			m[i][j] = rand() % 100;
	
	printf("Matriz original (%dx%d) \n", LIN, COL);		
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++)
			printf("%4d", m[i][j]);
			printf("\n");
}
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			transp[j][i] = m[i][j];
	
	printf("Matriz transposta (%dx%d)\n", COL, LIN);
	for(i=0; i<COL; i++){
		for(j=0; j<LIN; j++)
			printf("%4d", transp[i][j]);
			printf("\n");
	}
	return 0;
}
