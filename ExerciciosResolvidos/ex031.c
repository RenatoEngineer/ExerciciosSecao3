#include <stdio.h>

int main(){

	int sucessor;
	int antecessor;
	int numero;

	printf("Digite um numero inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	sucessor = numero + 1;
	antecessor = numero -1;

	printf("\nNumero digitado: %d\n", numero);
	printf("\nSucessor: %d", sucessor);
	printf("\nAntecessor: %d", antecessor);


	return 0;
}
