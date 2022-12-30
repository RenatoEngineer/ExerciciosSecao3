#include <stdio.h>

int main(){

	float horas;
	int diasTrab;
	float bonus = 0.10;
	float valorPago;

	printf("Digite o valor da Hora Trabalhada: ");
	fflush(stdout);
	scanf("%f", &horas);

	printf("\nDigite a quantidade de dias Trabalhados: ");
	fflush(stdout);
	scanf("%d", &diasTrab);

	valorPago = ((horas * diasTrab) * bonus) + (horas * diasTrab);

	printf("\nO Valor a Ser pago e: %.2f", valorPago);

	return 0;
}
