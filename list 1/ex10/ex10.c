#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor;
	printf("Digite um valor em reais:");
	scanf("%i", &valor);
	
	int nota50 = valor / 50;
	int resto = valor % 50;
	int nota20 = resto / 20;
	resto = resto % 20;
	int nota10 = resto / 10;
	resto = resto % 10;
	int nota5 = resto / 5;
	resto = resto % 5;
	int nota2 = resto / 2;
	resto = resto % 2;

	if (nota50 != 0){
		printf("Sao %i notas de R$50\n", nota50);
	}
	if (nota20 != 0){
		printf("Sao %i notas de R$20\n", nota20);
	}
	if (nota10 != 0){
		printf("Sao %i notas de R$10\n", nota10);
	}
	if (nota5 != 0){
		printf("Sao %i notas de R$5\n", nota5);
	}
	if (nota2 != 0){
		printf("Sao %i notas de R$2\n", nota2);
	}
	if (resto != 0){
		printf("Sao %i notas de R$1\n", resto);
	}
	return 0;
}
