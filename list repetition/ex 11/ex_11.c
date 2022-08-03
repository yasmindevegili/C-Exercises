#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, r1, r2;
	int n = 1;
	a = 90000;
	b = 200000;
	r1 = 0.03;
	r2 = 0.015;
	do{
		a = a + (a*r1);
		b = b + (b*r2);	
		n++;
	}while(a<b);
	printf("Em %i anos a populacao A sera maior que a B.", n);
	return 0;
}
