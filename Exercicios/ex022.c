#include <stdio.h>

int main(){

	float metro;
	float jarda;

	printf("Digite o comprimento em Jarda: ");
	fflush(stdout);
	scanf("%f", &jarda);

	metro = 0.91 * jarda;

	printf("O comprimento em Metro e: %.2f", metro);

	return 0;
}
