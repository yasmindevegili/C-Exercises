#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[20];
	int i;
	int positivo;
	
	for(i=0; i<20; i++){
		printf("Digite o %d valor:", i);
		scanf("%d", &v[i]);
	}
	printf("Os vetores positivos sao:\n");
	for(i=0; i<20; i++){
		if(v[i]>=0){
		printf("%d: %d\n", i, v[i]);
		}
	}
	return 0;
}
