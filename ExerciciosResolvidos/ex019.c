#include <stdio.h>

int main(){

	float litros;
	float mcubico;

	printf("Digite o Volume em Litros: ");
	fflush(stdout);
	scanf("%f", &litros);

	mcubico = litros / 1000;

	printf("O Volume em Metro Cubico e: %.2f", mcubico);

	return 0;
}
