#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[10], j[10], m[10];
	int i;
	
	for(i=0; i<10; i++){
		v[i] = rand() % 100;
		j[i] = rand() % 100;
	}
	printf("Vetor v:\n");
	for(i=0; i<10; i++){
		printf("%d: %d\n", i, v[i]);
	}
	
	printf("Vetor j:\n");
	for(i=0; i<10; i++){
		printf("%d: %d\n", i, j[i]);
	}
	
	printf("Vetor m:\n");
	for(i=0; i<10; i++){
		m[i] = v[i] * j[i];
		printf("%d: %d\n", i, m[i]);
	}
	return 0;
}
