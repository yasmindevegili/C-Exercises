/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um 
algoritmo em que calcule peso ideal, utilizando as seguintes fórmulas:
? Para homens: (72.7*h) - 58
? Para mulheres: (62.1*h) - 44.7
? Onde h equivale à altura da pessoa.*/

#include <stdio.h>
#include <string.h>
#define N 20
int main(void){
	float altura, peso;
	char sexo[N]; 
	
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	printf("Digite seu sexo:\n");
	scanf ("%s", &sexo);
	
		if (sexo[N] == 'feminino'){
			peso = (62.1*altura)-44.7;
			printf("oi");
		}
		else if(sexo[N] == 'masculino'){
			peso = (72.7*altura)-58;
		}
			printf("oi");
	printf("Seu peso ideal seria %f", peso);
	return 0;
}
