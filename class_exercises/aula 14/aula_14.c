#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int conta, a, b, result;
	printf("1 - Soma\n2 - Subtraçao\n3 - Multiplicaçao\n4 - Divisao\n5 - Sair\n");
	scanf("%i", &conta);
	do{
	printf("Digite os valores:");
	scanf("%i %i", &a, &b);
		if(conta==1){
			result = a+b;
		}if(conta==2){
			result = a-b;
		}if(conta==3){
			result = a*b;
		}if(conta==4){
			result = a/b;
		}
	printf("%i\n", result);
	printf("1 - Soma\n2 - Subtraçao\n3 - Multiplicaçao\n4 - Divisao\n5 - Sair\n");
	scanf("%i", &conta);	
	}while(conta!=5);
	
	return 0;
}
