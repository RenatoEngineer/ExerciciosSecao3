#include <stdio.h>

int main(){

	float numero;
	float divisao;

	printf("Digite um numero real: ");
	fflush(stdout);
	scanf("%f", &numero);

	divisao = numero / 5;

	printf("A quinta parte do numero e: %.2f", divisao);

	return 0;
}
