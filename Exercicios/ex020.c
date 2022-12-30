#include <stdio.h>

int main(){

	float quilograma;
	float libra;

	printf("Digite a Massa em Quilograma: ");
	fflush(stdout);
	scanf("%f", &quilograma);

	libra = quilograma / 0.45;

	printf("A Massa em Libra e: %.2f", libra);

	return 0;
}
