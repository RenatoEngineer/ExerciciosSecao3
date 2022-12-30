#include <stdio.h>

int main(){

	float numero;
	float resultado;

	printf("Digite um numero real: ");
	fflush(stdout);
	scanf("%f", &numero);

	resultado = numero * numero;

	printf("\nO quadrado do numero digitado e: %.2f", resultado);

	return 0;
}
