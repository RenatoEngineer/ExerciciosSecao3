#include <stdio.h>

int main(){

	float celsius;
	float kelvin;

	printf("Digite a Temperatura em Celsius: ");
	fflush(stdout);
	scanf("%f", &celsius);

	kelvin = (celsius + 273.15);

	printf("A Temperatura em Kelvin e: %.2f", kelvin);

	return 0;
}
