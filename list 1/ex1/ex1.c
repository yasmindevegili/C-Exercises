#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fah;
	printf("Digite a temperatura em fahrenheit:");
	scanf("%i", &fah);
	int c = (fah-32)*5/9;
	printf("A temperatura em celsius e: %i", c);
	return 0;
}
