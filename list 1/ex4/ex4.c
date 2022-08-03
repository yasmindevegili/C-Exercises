#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vi, a, t;
	
	printf("Digite a velocidade inicial:");
	scanf("%f", &vi);
	
	printf("Digite a aceleracao:");
	scanf("%f", &a);
	
	printf("Digite o tempo:");
	scanf("%f", &t);
	
	float vm = vi+a*t;
	printf("A velocidade media e %f", vm);
	return 0;
}
