#include <stdio.h>
#include <stdlib.h>

#define MAX 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float v[MAX];
	int i, qtd;
	
	printf("Quantos valores pretende calcular?");
	scanf("%d", &qtd);
	while(qtd>50){
		printf("Digite no maximo 50 valores:");
		scanf("%d", &qtd);
	}
	printf("A sequencia de Fibonacci de %d valores eh:\n", qtd);
	for(i=0; i<qtd; i++){
		if(i<=1){
			v[i] = 1;
		}
		else{
			v[i] = v[i-1] + v[i-2];
		}
		printf("%d: %0.f\n", i, v[i]);
	}
	
	return 0;
}
