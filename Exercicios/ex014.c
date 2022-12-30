#include <stdio.h>

int main(){

	float graus;
	float radianos;

	printf("Digite o Angulo em graus: ");
	fflush(stdout);
	scanf("%f", &graus);

	radianos = (graus * 3.14) / 180;

	printf("O Angulo em radianos e: %.2f", radianos);

	return 0;
}
