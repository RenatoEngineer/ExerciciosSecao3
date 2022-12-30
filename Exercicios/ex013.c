#include <stdio.h>

int main(){

	int quilometros;
	int milhas;

	printf("Digite a Distancia em Quilometros: ");
	fflush(stdout);
	scanf("%d", &quilometros);

	milhas = quilometros / 1.61;

	printf("A Distancia em Milhas e: %d", milhas);

	return 0;
}
