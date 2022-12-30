#include <stdio.h>

int main(){

	float kelvin;
	float celsius;

	printf("Digite a Temperatura em Kelvin: ");
	fflush(stdout);
	scanf("%f", &kelvin);

	celsius = (kelvin - 273.15);

	printf("A Temperatura em Celsius e %.2f", celsius);

	return 0;
}
