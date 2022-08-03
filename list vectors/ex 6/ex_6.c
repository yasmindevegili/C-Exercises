#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[30];
	int i;
	float cont=0, soma=0, soma2=0;
	
	for(i=0; i<30; i++){
		v[i] = rand() % 100;
	}
	for(i=0; i<30; i++){
		printf("%d: %d\n", i, v[i]);
		soma = soma + v[i];
	}
	
	soma = soma/30;
	printf("A media de todos os valores eh %.3f\n", soma);
	printf("Os vetores acima da media sao:\n");
	for(i=0; i<30; i++){
		if(v[i]>soma){
			printf("%d: %d\n", i, v[i]);
			soma2 = soma2 + v[i];
			cont++;
		}
	}
	
	printf("Sao %.0f vetores acima da media e a sua soma eh %.0f\n", cont, soma2);
	printf("A porcentagem de vetores acima da media em relacao ao todo eh %.1f por cento\n", (100*cont)/30);
	return 0;
}
