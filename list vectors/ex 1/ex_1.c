#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[20];
	int i;
	int cont=0;
	
	for(i=0; i<20; i++){
		v[i] = rand() % 100;
	}
	
	for(i=0; i<20; i++){
		if(v[i]%2==0){
			cont++;
		}
		printf("%d: %d\n", i, v[i]);
	}
	
	printf("A quantidade de valores pares eh %d", cont);
	return 0;
}
