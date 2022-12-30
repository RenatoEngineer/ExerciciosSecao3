#include <stdio.h>

int main(){

	float libra;
	float quilograma;

	printf("Digite a Massa em Libra: ");
	fflush(stdout);
	scanf("%f", &libra);

	quilograma = libra * 0.45;

	printf("A Massa em Quilograma e: %.2f", quilograma);

	return 0;
}
