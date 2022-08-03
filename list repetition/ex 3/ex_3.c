#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor, sair, maior, menor;
	printf("Digite um valor:");
	scanf("%i", &valor);
	maior = valor;
	menor = valor;
	do{
	printf("Digite outro valor:");
	scanf("%i", &valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("Deseja encerrar? Digite 1, caso contrario digite 2\n");
	scanf("%i", &sair);
	}while(sair==2);
	int result = maior - menor;
	printf("A amplitude dos valores eh %i", result);
	
	return 0;
}
