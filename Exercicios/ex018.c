#include <stdio.h>

int main(){

	float mcubico;
	float litros;

	printf("Digite o volume em Metro Cubico: ");
	fflush(stdout);
	scanf("%f", &mcubico);

	litros = 1000 * mcubico;

	printf("O volume em Litros e: %.2f", litros);

	return 0;
}
