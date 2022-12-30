#include <stdio.h>

int main(){

	float amigo1;
	float amigo2;
	float amigo3;
	float valorAposta;
	float premio;

	float porcentagemAmigo1;
	float porcentagemAmigo2;
	float porcentagemAmigo3;

	char porcentagem = 37;

	printf(".:: CALCULADORA DE APOSTAS ::.\n");

	printf("Valor Aposta Amigo 1: R$ ");
	fflush(stdout);
	scanf("%f", &amigo1);

	printf("Valor Aposta Amigo 2: R$ ");
	fflush(stdout);
	scanf("%f", &amigo2);

	printf("Valor Aposta Amigo 3: R$ ");
	fflush(stdout);
	scanf("%f", &amigo3);

	printf("\nDigite o Valor do Premio: R$ ");
	fflush(stdout);
	scanf("%f", &premio);

	valorAposta = amigo1 + amigo2 + amigo3;

	porcentagemAmigo1 = (amigo1 * 100) / valorAposta;
	porcentagemAmigo2 = (amigo2 * 100) / valorAposta;
	porcentagemAmigo3 = (amigo3 * 100) / valorAposta;

	printf("\nO Amigo 1 apostou %.0f%c", porcentagemAmigo1, porcentagem);
	printf("\nO Amigo 2 apostou %.0f%c", porcentagemAmigo2, porcentagem);
	printf("\nO Amigo 3 apostou %.0f%c", porcentagemAmigo3, porcentagem);

	printf("\n\nO Amigo 1 recebera R$%.2f", premio * porcentagemAmigo1 / 100);
	printf("\nO Amigo 2 recebera R$%.2f", premio * porcentagemAmigo2 / 100);
	printf("\nO Amigo 1 recebera R$%.2f", premio * porcentagemAmigo3 / 100);

	return 0;
}
