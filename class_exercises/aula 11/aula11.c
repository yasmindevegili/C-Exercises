#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Digite n:");
	scanf("%i", &n);
	
	int raiz = 0, impar = 1;
	while(n >= impar){
		n = n - impar;
		impar = impar + 2;
		raiz++;
	}
	prinf("A parte inteira da raiz quadrada e %i", raiz);
	return 0;
}
