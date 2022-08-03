#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Digite n:");
	scanf("%i", &n);
	while (n>0){
		printf("%i\n", n);
		n = n - 1;
	}
	return 0;
}
