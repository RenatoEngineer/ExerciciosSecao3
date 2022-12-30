#include <stdio.h>

int main(){

	int quilometro;
	float metros;

	printf("Digite a Velocidade em Km/h: ");
	fflush(stdout);
	scanf("%d", &quilometro);

	metros = quilometro / 3.6;

	printf("A Velocidade em m/s e: %.2f m/s", metros);

	return 0;
}
