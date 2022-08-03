#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor;
	printf("Digite um valor:");
	scanf("%i", &valor);
	int i = 1, cont = 0;
	do{
		if(valor % i == 0){
			cont = cont + i;
		}
		i++;
	}while(i<=valor);
	if(cont/2==valor){
		printf("%i eh um quadrado perfeito!", valor);
	}else{
		printf("%i nao eh um quadrado perfeito!", valor);
	}
	
	return 0;
}
