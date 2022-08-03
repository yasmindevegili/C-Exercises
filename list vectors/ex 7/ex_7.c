#include <stdio.h>
#include <stdlib.h>

#define MAX 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[MAX], m[MAX];
	int i;
	int cont=0;
	
	for(i=0; i<MAX; i++){
		v[i] = rand() % 100;
	}
	
	printf("O vetor original eh:\n");
	for(i=0; i<MAX; i++){
		printf("%d: %d\n", i, v[i]);
		printf("\n");
	}
	
	printf("O vetor invertido eh:\n");
	for(i=MAX-1; i>-1; i--){
	printf("%d: ", cont);
	cont++;
	printf("%d\n", v[i]);
	printf("\n");
	}
	return 0;
}
