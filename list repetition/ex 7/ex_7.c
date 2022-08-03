#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, qtd, cont=0;
	float  param_arit, param_har, arit=0, har=0;
	printf("Digite a quantidade de numeros a calcular:");
	scanf("%i", &qtd);
	do{
		printf("Digite um N inteiro e positivo:");
		scanf("%i", &n);
		if((n>0) && (n%1==0)){
		param_arit = (float)n/qtd; //typecasting
		param_har = (float)1/n;
		arit = arit + param_arit;
		har = har + param_har;
		cont++;
		}
		else{
			printf("Digite outro valor\n");
		}
	}while(cont!=qtd);
	printf("A media aritmetica eh %f e a media harmonica eh %f.", arit, (float)qtd/har);
	return 0;
}
