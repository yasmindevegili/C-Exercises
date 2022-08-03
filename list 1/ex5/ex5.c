#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, altura;
	
	printf("Digite o raio do cilindro:");
	scanf("%f", &raio);
	
	printf("Digite a altura do cilindro:");
	scanf("%f", &altura);
	
	float volume = 2.14*(raio*raio)*altura;
	printf("O volume do cilindro e %f", volume);
	return 0;
}
