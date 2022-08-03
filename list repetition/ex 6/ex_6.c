#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sexo;
	int altura, maior=0, media=0, media2;
	int sair, cont;
	cont=0;
	
	do{
		printf("Digite f para feminino ou m para masculino:");
		scanf(" %c", &sexo);
		printf("Qual a altura?");
		scanf("%i", &altura);
		switch(sexo){
			case 'm':
				if(altura>maior){
					maior = altura;
				}
			break;
			case 'f':
				cont++;
				media = media + altura;
			break;
			default:
				printf("Entrada invalida");
		}
		printf("Deseja sair? Digite 1, caso contrario digite 2\n");
		scanf("%i", &sair);
	}while(sair==2);
	
	media2 = media/cont;
	printf("A maior altura entre os homens foi %i e a media da altura das mulheres foi %i", maior, media2);
	return 0;
}
