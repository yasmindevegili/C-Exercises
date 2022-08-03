#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont = 0;
	float x, soma = 0;
	printf("Digite o 1° numero:");
	scanf("%f", &x);
	
	while(x!=0){
		soma = soma+x;
		cont++;
		printf("Digite o %i° numero:", cont+1);
		scanf("%f", &x);
	}
	float media = soma/cont;
	printf("A media e %f", media);
	return 0;
}
