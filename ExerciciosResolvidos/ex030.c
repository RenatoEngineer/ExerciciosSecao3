#include <stdio.h>

int main(){

	float real;
	float dolar;
	float cambio;

	printf("Digite o Valor em Real: ");
	fflush(stdout);
	scanf("%f", &real);

	printf("Digite a cotação do Dolar: ");
	fflush(stdout);
	scanf("%f", &dolar);

	cambio = real / dolar;

	printf("O Valor em Real convertido para Dolar e: %.2f", cambio);

	return 0;
}
