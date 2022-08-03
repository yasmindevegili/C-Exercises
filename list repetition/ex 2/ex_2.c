#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, cont, soma=0, ordem, impar;
	printf("Digite o valor de x:");
	scanf("%i", &x);
	printf("Digite o valor de y:");
	scanf("%i", &y);
	if(x<y){
		ordem = 1;
	}
	if(x>y){
		ordem = 2;
	}
	switch(ordem){
	case 1:
		if (x%2==0){
			cont = x+1;
			impar = cont;
		}
		if (x%2!=0){
			cont = x+2;
			impar = cont;
		}
		do{
			soma = soma+impar;
			impar = impar+2;
		}while(impar<y);
	printf("A soma dos impares entre %i e %i eh %i", x, y, soma);
	break;
		
	case 2:
		if (y%2==0){
			cont = y+1;
			impar = cont;
		}
		if (y%2!=0){
			cont = y+2;
			impar = cont;
		}
		do{
			soma = soma+impar;
			impar = impar+2;
		}while(impar<x);
	printf("A soma dos impares entre %i e %i eh %i", y, x, soma);
	break;
	}
	
	return 0;
}

