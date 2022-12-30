#include <stdio.h>

int main(){

	float numero;

	printf("Digite um numero real: ");
	fflush(stdout);
	scanf("%f", &numero);

	printf("\nO numero real digitado e: %.1f", numero);

	return 0;
}
