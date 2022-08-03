#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m[LIN][COL];
	int i, j;
	int denominador=0, media=0;
	
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++){
			//printf("M[%d, %d] = ", i, j);
			//scanf("%d", &m[i][j]);
			m[i][j] = rand()%1000;
		}
		printf ("\nDetalhes da matriz\n");
		
	for( i = 0 ; i < LIN ; i++ ){
		for( j = 0 ; j < COL ; j++ ){
			printf("%4d ", m[i][j]);
		}
		 
		printf("\n");
	}
	for(i=0; i<LIN; i++)
		for(j=0; j<COL; j++)
			if(m[i][j] % 2 == 0){
				denominador++;
				media = media + m[i][j];
			}
	if(denominador == 0)
		printf("Nao a pares");
	else
		printf("A media dos %d numeros pares eh %.3f\n", denominador, (float)media/denominador);
			
		
	return 0;
}
