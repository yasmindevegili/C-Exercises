#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float potencia, largura, comprimento, dimensoes;
	printf("Digite a potencia das lampadas utilizadas:");
	scanf("%f", &potencia);
	printf("Digite a largura e o comprimento do comodo:");
	scanf("%f %f", &largura, &comprimento);
	
	dimensoes = (largura * comprimento) *18;
	int lampadas = dimensoes/potencia;
	printf("A quantidades de lampadas necessárias e %i", lampadas);
	
	return 0;
}
