#include <stdio.h>

int main(){

	float diaria = 30.00;
	int diasTrab;
	float diariaLiq;
	float ir = 0.8;

	printf("Digite a quantidade de dias trabalhados: ");
	fflush(stdout);
	scanf("%d", &diasTrab);

	diariaLiq = (diaria * ir) * diasTrab;

	printf("O encanador deve receber: %.2f", diariaLiq);

	return 0;
}
