#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min_intervalo, max_intervalo, valor, far;
	printf("Digite o intervalor desejado separado por virgula(ex: 5, 15):");
	scanf("%i, %i", &min_intervalo, &max_intervalo);
	printf("Farheinheit //// Centigrados\n");
	valor = min_intervalo;
	do{
		far = (valor * 9/5) + 32 ;
		printf("%iF --------- %iC\n", far, valor);
		valor = valor + 2;
	}while(valor<=max_intervalo);
	return 0;
}
