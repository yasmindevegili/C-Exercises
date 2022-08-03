#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Digite n:");
	scanf("%i", &n);
	
	int i = 1;
	while(i<=n){
		if(i%2 != 0){
		printf("%i\n", i);	
		}
		i = i+1;
	}
	return 0;
}
