#include <stdio.h>

int main(){

	float celsios;
	float fahrenheit;

	printf("Digite a Temperatura em Celsios: ");
	fflush(stdout);
	scanf("%f", &celsios);

	fahrenheit = (celsios * (9.0/5.0) + 32.0);

	printf("A Temperatura em Fahrenheit e: %.2f", fahrenheit);

	return 0;
}
