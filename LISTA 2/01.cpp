/*Elabore um algoritmo em que efetue a leitura de um valor que esteja entre a faixa de 
1 a 9. Após a leitura do valor fornecido pelo usuário, o programa deverá indicar uma 
de duas mensagens: “O valor está na faixa permitida”, caso o usuário forneça o 
valor nesta faixa, ou a mensagem “O valor está fora da faixa permitida”, caso o 
usuário forneça valores menores que 1 ou maiores que 9.*/
#include <stdio.h>

int main(void){
	float valor;
	
	printf("Digite um valor de 1 a 9:\n");
	scanf("%f", &valor);
	
	if(valor>9 || valor<0){
		do{
		printf("O valor esta fora da faixa permitida.\n");
		printf("Digite um valor de 1 a 9:\n");
		scanf("%f", &valor);
		}while(valor>9 || valor<0);
		}	
	else{
		printf("O valor esta dentro da faixa permitida.");
	}
	return 0;
}
