#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tempo;
	
	printf("Digite o tempo em segundos:");
	scanf("%i", &tempo);
	
	int hora = tempo / 3600;
	int min = (tempo % 3600) / 60;
	int s = ((tempo % 3600) / 60) % 60;
	printf("Sao %ihrs, %imin e %is.", hora, min, s);
	return 0;
}
