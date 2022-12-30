#include <stdio.h>

int main(){

	float hectare;
	float metro2;

	printf("Digite a area em Hectare: ");
	fflush(stdout);
	scanf("%f", &hectare);

	metro2 = hectare * 10000;

	printf("A area em Metro Quadrado e: %.2f", metro2);

	return 0;
}
