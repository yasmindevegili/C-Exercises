#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n;
		int cont = 0;
	printf("Digite um valor de n:");
	scanf("%i", &n);
	int maior = n;
	while(n!=0){
		cont ++;	
		printf("Digite um valor de n:");
		scanf("%i", &n);
		if(n > maior){
			maior = n;
	}	
	}
	if(cont==0){
		printf("Nao ha numeros na sequencia");
	}
	else{
	printf("%i", maior);
	}
	
	return 0;
}
