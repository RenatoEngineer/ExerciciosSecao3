#include <stdio.h>

int main(){

	float radianos;
	float graus;

	printf("Digite o Angulo em Radianos: ");
	fflush(stdout);
	scanf("%f", &radianos);

	graus = (radianos * 180) / 3.14;

	printf("O Angulo em Graus e: %.2f", graus);

	return 0;
}
