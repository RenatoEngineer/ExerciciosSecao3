#include <stdio.h>

int main(){

	float metro2;
	float acres;

	printf("Digite a area em Metro Quadrado: ");
	fflush(stdout);
	scanf("%f", &metro2);

	acres = metro2 * 0.000247;

	printf("A area em Acres e: %.2f", acres);

	return 0;
}
