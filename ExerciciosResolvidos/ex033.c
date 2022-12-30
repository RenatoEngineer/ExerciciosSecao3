#include <stdio.h>

int main(){

	float lado;

	printf("Digite um lado do quadrado: ");
	fflush(stdout);
	scanf("%f", &lado);

	printf("A area do quadrado e: %.2f", lado * lado);

	return 0;
}
