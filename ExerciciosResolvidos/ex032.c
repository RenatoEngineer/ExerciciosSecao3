#include <stdio.h>

int main(){

	int numero;
	int sucessor;
	int antecessor;
	int soma;

	printf("Digite um numero inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	sucessor = (numero * 3) + 1;
	antecessor = (numero * 2) - 1;

	soma = sucessor + antecessor;

	printf("A soma do Triplo do Sucessor\ncom o Dobro do Antecessor e: %d", soma);

	return 0;
}
