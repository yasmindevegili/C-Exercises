#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[30];
	int i;
	int cont=0;
	
	for(i=0; i<30; i++){
		v[i] = rand() % 100;
	}
	printf("Vetor com 0:\n");
	for(i=0; i<30; i++){
		printf("%d: %d\n", i, v[i]);
	}
	
	printf("Vetor sem 0:\n");
	for(i=0; i<30; i++){
		if(v[i]==0){
			v[i] = 1;
		}
		printf("%d: %d\n", i, v[i]);
	}
	
	
	return 0;
}
