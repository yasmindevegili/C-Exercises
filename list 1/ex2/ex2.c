#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome [20];
	float distancia, tempo;
	
	printf("Digite o nome do piloto:");
	scanf("%s", &nome);
	
	printf("Qual a distancia percorrida (km):");
	scanf("%f", &distancia);
	
	printf("Qual o tempo do trajeto (h):");
	scanf("%f", &tempo);
	
	float v = distancia/tempo;
	printf("A velocidade media do %s foi %f km/h", nome, v);

	return 0;
}

