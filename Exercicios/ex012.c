#include <stdio.h>

int main(){

	int milhas;
	int quilometro;

	printf("Digite a Distância em Milhas: ");
	fflush(stdout);
	scanf("%d", &milhas);

	quilometro = 1.61 * milhas;

	printf("A Distância em Quilometro e: %d Km", quilometro);

	return 0;
}
