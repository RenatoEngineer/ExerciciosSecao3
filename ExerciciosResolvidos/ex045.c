#include <stdio.h>

int main(){

	char maiusculo;
	int minusculo;

	printf("Digite uma letra Maiuscula: ");
	fflush(stdout);
	scanf("%c", &maiusculo);

	minusculo = maiusculo + 32;

	printf("\nA letra digitada em Minusculo e: %c", minusculo);

	return 0;
}
