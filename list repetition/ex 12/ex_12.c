#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, r1, r2;
	int n = 1;
	do{
		printf("Digite a populacao de A:");
		scanf("%f", &a);
		if(a==0){
		printf("Valor invalido\n");
		}	
	}while(a==0);
	do{
		printf("Digite a populacao de B:");
		scanf("%f", &b);
		if(b==0){
		printf("Valor invalido\n");
		}	
	}while(b==0);
	do{
		printf("Digite a taxa de crescimento de A:");
		scanf("%f", &r1);
		if(r1==0){
		printf("Valor invalido\n");
		}	
	}while(r1==0);
	do{
		printf("Digite a taxa de crescimento de B:");
		scanf("%f", &r2);
		if(r2==0){
		printf("Valor invalido\n");
		}	
	}while(r2==0);
	r1 = r1/100;
	r2 = r2/100;
	
	if(a>b){
	do{
		a = a + (a*r1);
		b = b + (b*r2);
		n++;
	}while(b<a);
	printf("Em %i anos a populacao B sera maior que a A.", n);
	}
	if(a<b){
	do{
		a = a + (a*r1);
		b = b + (b*r2);
		n++;
	}while(a<b);
	printf("Em %i anos a populacao A sera maior que a B.", n);
	}
	return 0;
}
