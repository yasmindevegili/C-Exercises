#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome [20];
	char sexo;
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	printf("Digite seu sexo:");
	scanf(" %c", &sexo);
	
	if(sexo == 'f'){
		printf("Ilma Sra. %s", nome);
	}else{
		if(sexo == 'm'){
			printf("Ilmo Sr. %s", nome);
		}else{
			printf("Entrada invalida.");
		}
	}
	return 0;
}
