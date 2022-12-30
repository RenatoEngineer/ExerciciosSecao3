#include <stdio.h>
#include <math.h>

int main(){

	float x;
	float y;
	float resultado;

	printf("Digite o Valor da Coordenada X: ");
	fflush(stdout);
	scanf("%f", &x);

	printf("Digite o Valor da Coordenada Y: ");
	fflush(stdout);
	scanf("%f", &y);

	resultado = sqrt ((x * x) + (y * y));

	printf("\nA Distancia entre os Dois pontos no Plano R² e: %.2f", resultado);

	return 0;
}
