#include <stdio.h>

int main(){

	float metros;
	int quilometro;

	printf("Digite a Velocidade em m/s: ");
	fflush(stdout);
	scanf("%f", &metros);

	quilometro = metros * 3.6;

	printf("A Velocidade em Km/h e: %d km/h", quilometro);

	return 0;
}
