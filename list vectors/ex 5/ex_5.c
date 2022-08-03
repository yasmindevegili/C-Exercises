#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[30];
	int i;
	float cont=0, soma=0;
	
	for(i=0; i<30; i++){
		v[i] = rand() % 100;
	}
	
	printf("Vetor:\n");
	for(i=0; i<30; i++){
		if(v[i]%2!=0){
			if(v[i]>10){
				soma = soma + v[i];
				cont++;
			}
		}
		printf("%d: %d\n", i, v[i]);
	}
	printf("A media dos valores impares maiores que 10 eh %.3f", soma/cont);
	return 0;
}
