#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, x, cont;
	printf("Digite n e x:");
	scanf("%i %i", &n, &x);
	
	cont = 1;
	while(cont<=n){
		printf("%i\n", cont);
		if(cont % x ==0){
			printf("Multiplo de x\n");
		}
		cont++;
		
		
	}
	return 0;
}
