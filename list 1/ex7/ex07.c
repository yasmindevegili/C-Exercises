#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_bruto;
	
	printf("Digite seu salario bruto:");
	scanf("%f", &salario_bruto);
	
	float ir = (salario_bruto*15)/100;
	float inss = (salario_bruto*11)/100;
	float sindicato = (salario_bruto*3)/100;
	float salario = salario_bruto - ir - inss - sindicato;
	printf("Salario bruto: %0.1f\n IR(15%): %0.1f\n INSS(11%): %0.1f\n Sindicato(3%): %0.1f\n Salario liquido: %0.1f", salario_bruto, ir, inss, sindicato, salario);
	return 0;
	
}
