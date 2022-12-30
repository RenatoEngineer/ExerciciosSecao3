#include <stdio.h>

int main(){

	float comprimento;
	float largura;
	float precoTela;
	float custoCercar;

	printf("Digite o Comprimento do Terreno: ");
	fflush(stdout);
	scanf("%f", &comprimento);

	printf("Digite a Largura do Terreno: ");
	fflush(stdout);
	scanf("%f", &largura);

	printf("Digite o Preco da Tela: R$ ");
	fflush(stdout);
	scanf("%f", &precoTela);

	custoCercar = ((comprimento + largura) * 2) * precoTela;

	printf("O Custo para Cercar o Terreno e: R$ %.2f", custoCercar);

	return 0;
}
