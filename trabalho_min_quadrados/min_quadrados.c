#include <stdio.h>
#include <stdlib.h>

#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x[MAX], y[MAX];
	float sx=0, sy=0, sxy=0, sx2=0;
	int i, n;
	
	printf("Quantas coordenadas vao ser calculadas?\n");
	scanf("%d", &n);
	while(n>100){
		printf("Digite uma quantidade menor que 100:\n");
		scanf("%d", &n);
	}
	
	printf("Digite o valor das cordenadas:\n");
	for(i=0; i<n; i++){
		printf("(x,y): ");
		scanf("%f %f", &x[i], &y[i]);
		sx = sx + x[i];
		sy = sy + y[i];
		sxy = sxy + x[i]*y[i];
		sx2 = sx2 + x[i]*x[i];
	}
	float d = (n*sx2-sx*sx);
	float a0 = (sy*sx2-sx*sxy)/d;
	float a1 = (n*sxy-sx*sy)/d;
	
	printf("A equacao da reta eh:\n");
	for(i=0; i<n; i++){
		printf("(%.0f, %.0f): ", x[i], y[i]);	
		printf("%.0f = %.2f * %.0f + %.2f\n", y[i], a1, x[i], a0);
	}
	return 0;
}
