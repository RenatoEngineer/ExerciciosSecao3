#include <stdio.h>

int main(){

	float valor1;
	float valor2;
	float valor3;
	float soma;

	printf("Digite tres numeros: ");
	fflush(stdout);
	scanf("%f %f %f", &valor1, &valor2, &valor3);

	soma = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);

	printf("A soma dos quadrados dos tres numeros e: %.2f", soma);

	return 0;
}
