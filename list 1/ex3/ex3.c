#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome [20];
	int tempo, salario;
	
	printf("Digite o nome do funcionario:");
	scanf("%s", &nome);
	
	printf("Digite quantas horas ele(a) trabalha:");
	scanf("%i", &tempo);
	
	printf("Digite o quanto ele(a) ganha por hora:");
	scanf("%i", &salario);
	
	int total = tempo * salario;
	printf("O salario de %s e de R$%i.", nome, total);
	return 0;
}
