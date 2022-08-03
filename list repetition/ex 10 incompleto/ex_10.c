#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char resposta[3], sexo[3];
	int n, cont=0, fem_sim, fem_nao, masc_sim, masc_nao;
	printf("Quantas pessoas vao ser analisadas?");
	scanf("%i", &n);
	do{
		printf("Fem ou masc:");
		scanf("%s", &sexo);
		printf("Digite sua resposta:");
		scanf("%s", &resposta);
		cont++;
		for(sexo=='fem'; resposta=='sim'; fem_sim==0){
			fem_sim++;
		}
		for(sexo=='masc'; resposta=='sim'; masc_sim==0){
			masc_sim++;
		}
		for(sexo=='fem'; resposta=='nao'; fem_nao==0){
			fem_nao++;
		}
		for(sexo=='masc'; resposta=='nao'; masc_nao==0){
			masc_nao++;
		}
	}while(cont!=n);
	printf("%i", fem_sim+masc_sim);
	printf("%i %i %i %i", fem_sim, masc_sim, fem_nao, masc_nao);
	printf("%i pessoas digitaram sim\n %i pessoas digitaram nao\n %i por cento das mulheres digitaram sim\n %i por cento dos homens digitaram nao", fem_sim+masc_sim, fem_nao+masc_nao, (100*fem_sim)/fem_sim+fem_nao, (100*masc_nao)/masc_nao+masc_sim);
	return 0;
}
