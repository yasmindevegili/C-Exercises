#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Digite um numero n:");
	scanf("%i", &n);
	
	int soma = 0;
	int soma_q = 0;
	int i = 1;
	while(i<=n){
		soma = soma + i;
		soma_q = soma_q + (i*i);
		i++;
	}
	
	printf("A soma e %i e a soma dos quadrados %i e a media %f", soma, soma_q, (float)soma/n);
	return 0;
}
