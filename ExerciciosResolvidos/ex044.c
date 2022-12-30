#include <stdio.h>

int main(){

	float degrau;
	float altura;
	float qtDegrau;

	printf("Digite a Altura do Degrau em Centimetro: ");
	fflush(stdout);
	scanf("%f", &degrau);

	printf("\nDigite a Altura que deseja alcançar em Metro: ");
	fflush(stdout);
	scanf("%f", &altura);

	qtDegrau = altura / (degrau / 100);

	printf("\nVoce devera subir: %.0f degrais", qtDegrau);

	return 0;
}
