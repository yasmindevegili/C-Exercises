#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Digite a e b:");
	scanf("%i %i", &a, &b);
	while (a<0){
		printf("Erro. Digite outro valor para a: ");
		scanf("%i", &a);
	}
	while (b<0){
		printf("Erro. Digite outro valor para b: ");
		scanf("%i", &b);
	}
	
	int i = 0;	
	while(a>0){
	i = i + b;
	a = a - 1;
	}
	printf("%i", i);
	return 0;
}
