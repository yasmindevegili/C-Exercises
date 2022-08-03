#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, cont=1;
	printf("Digite uma valor de n:");
	scanf("%i", &n);
	if (n!=0){
	
	do{
		printf("%iX%i eh %i\n", cont, n, cont*n);
		cont++;
	}while(cont<=10);
	}
	else{
		printf("A tabuada do 0 eh 0");
	}
	return 0;
}
