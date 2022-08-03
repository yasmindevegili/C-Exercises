#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int segundos;
	printf("Digite o tempo em segundos:");
	scanf("%i", &segundos);
	
	int horas = segundos/(60*60);
	int resto = segundos % (60*60);
	int minutos = resto /60;
	int seg = resto % 60;
	printf ("Sao %i horas, %i minutos e %i segundos.", horas, minutos, seg);
	return 0;
}
