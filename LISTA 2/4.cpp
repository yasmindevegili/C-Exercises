/*Fa�a um algoritmo em ler quatro valores referentes a quatro notas escolares de um 
aluno e imprimir uma mensagem dizendo que o aluno foi aprovado, se o valor da 
m�dia escolar for maior ou igual a 7.0. Se o valor da m�dia for menor que 7.0, 
solicitar a nota de exame, somar com o valor da m�dia e obter nova m�dia. Se a 
nova m�dia for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno 
foi aprovado em exame. Se o aluno n�o foi aprovado, indicar uma mensagem 
informando esta condi��o. Apresentar junto com as mensagens o valor da m�dia do 
aluno, para qualquer condi��o.
*/
#include <stdio.h>

int main(void){
	float n, soma=0;
	int i;
	
	for(i=1; i<=4; i++){
		printf("Digite a %d nota:\n", i);
		scanf("%f", &n);
		soma = soma + n;
	}
	
	if((soma/4)>=7.00){
		printf("Aluno aprovado.");
	}
	else if((soma/4)<7.00){
		printf("Aluno em recuperacao. Digite a nota do exame:\n");
		scanf("%f", &n);
		soma = soma + n;
		if((soma/5)>=5.00){
			printf("Aluno aprovado");
		}
		else{
			printf("Aluno reprovado");
		}
	}
	
	
	return 0;
}
