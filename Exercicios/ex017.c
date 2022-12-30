#include <stdio.h>

int main(){

	int centimetro;
	float polegadas;

	printf("Digite o comprimento em Centimetros: ");
	fflush(stdout);
	scanf("%d", &centimetro);

	polegadas = centimetro / 2.54;

	printf("O comprimento em Polegadas e: %.2f", polegadas);

	return 0;
}
