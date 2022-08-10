/*Escreva um algoritmo que leia 2 valores reais (x e y) que representam as 
coordenadas de um ponto em um plano. Determine qual o quadrante ao qual 
pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x e y = 0).
*/
#include <stdio.h>
int main(void){
	float x, y;
	
	printf("Digite dois valores:\n");
	scanf("%f %f", &x, &y);
	
	if((x==0) && (y==0)){
		printf("Estao na origem.");
	}
	else if(x>0){
		if(y>0){
			printf("As coordenadas estao no primeiro quadrante.");
		}
		else{
			printf("As coordenadas estao no quarto quadrante.");
		}
	}
	else if (x<0){
		if(y>0){
			printf("As coordenadas estao no segundo quadrante.");
		}
		else{
			printf("As coordenadas estao no terceiro quadrante.");
		}
	}
	
	return 0;
}
