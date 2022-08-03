#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lado1, lado2, lado3;
	
	printf("Digite o tamanho do lado 1:");
	scanf("%i", &lado1);
	
	printf("Digite o tamanho do lado 2:");
	scanf("%i", &lado2);
	
	printf("Digite o tamanho do lado 3:");
	scanf("%i", &lado3);
	
	if(lado1 == lado2 && lado2 == lado3){
		printf("Equilatero");
	}else{
		if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
			printf("Isosceles");
		}else{
			printf("Escaleno");
		}
	}
	return 0;
}
