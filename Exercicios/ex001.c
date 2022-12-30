#include<stdio.h>

int main(){

	int numero;

	printf("Digite um numero inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	printf("\nO numero digitado e: %d", numero);

	return 0;
}
