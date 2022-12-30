#include <stdio.h>

int main(){

	float metro2;
	float hectare;

	printf("Digite a area em Metro Quadrado: ");
	fflush(stdout);
	scanf("%f", &metro2);

	hectare = metro2 * 0.0001;

	printf("A area em Hectare e: %.2f", hectare);

	return 0;
}
