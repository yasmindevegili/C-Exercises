#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int qtd, cont, n, i, r, pa, soma;
	printf("Digite quantos termos deseja calcular:");
	scanf("%i", &qtd);
	
		printf("Digite n:");
		scanf("%i", &n);
		cont++;	
	printf("Digite i:");
	scanf("%i", &i);
	printf("Digite r:");
	scanf("%i", &r);
	pa = i + (n-1)*r;
	soma = ((i+pa)*n)/2;
	 
	
	
	printf("%i %i", pa, soma);
	return 0;
}
