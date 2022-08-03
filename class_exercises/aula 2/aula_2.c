#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor;
	
	printf("Digite um valor de 1 a 9:");
	scanf("%i", &valor);
	if(valor>=1 && valor<=9){
		printf("Valor valido!");
	}else{
		printf("Valor invalido!");
	}
	return 0;
}
