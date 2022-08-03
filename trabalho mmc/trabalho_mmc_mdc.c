#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, cont, resto, sair;
	do{
	printf("Digite a e b:");
	scanf("%i %i", &a, &b);
	if((a>0) && (b>0)){
	
	for(cont=1; cont>0; cont++){
		resto = (a*cont) % b;
		if(resto==0) break;
	}
	printf("O MMC eh %i\n", a*cont);
	
	while (b != 0){
           resto = a % b;
           a = b;
           b = resto;
	}
		
	printf("O MDC eh %i\n", a);
	}
	else{
		printf("Entrada invalida\n");
	}
	printf("Deseja sair? Digite 1, caso contrario digite 2\n");
	scanf("%i", &sair);
	}while (sair!=1);

	return 0;
}
