#include <stdio.h>

int main(){

	float polegada;
	int centimetro;

	printf("Digite o comprimento em Polegada: ");
	fflush(stdout);
	scanf("%f", &polegada);

	centimetro = polegada * 2.54;

	printf("O Comprimento em Centimetros e: %d", centimetro);

	return 0;
}
