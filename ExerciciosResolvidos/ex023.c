#include <stdio.h>

int main(){

	float metro;
	float jarda;

	printf("Digite o comprimento em Metro: ");
	fflush(stdout);
	scanf("%f", &metro);

	jarda = metro / 0.91;

	printf("O comprimento em Jarda e: %.2f", jarda);

	return 0;
}
