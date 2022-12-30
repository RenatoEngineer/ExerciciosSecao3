#include <stdio.h>

int main(){

	float celsios;
	float fahrenheit;

	printf("Digite a Temperatura em Fahrenheit: ");
	fflush(stdout);
	scanf("%f", &fahrenheit);

	celsios = (5.0 * (fahrenheit - 32.0) / 9.0);

	printf("\nA Temperatura em Celsios e %.2f", celsios);

	return 0;
}
