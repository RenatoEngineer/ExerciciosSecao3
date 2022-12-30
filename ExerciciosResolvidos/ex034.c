#include <stdio.h>

int main(){

	float raio;
	float area;

	printf("Digite o raio do Circulo: ");
	fflush(stdout);
	scanf("%f", &raio);

	area = 3.141592 * (raio * raio);

	printf("A area do Circulo e: %f", area);

	return 0;
}
