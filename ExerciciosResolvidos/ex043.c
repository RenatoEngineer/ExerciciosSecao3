#include <stdio.h>

int main(){

	float venda;
	float vista;
	float prazo;
	float comissaoVista;
	float comissaoPrazo;

	printf("Digite o valor da Venda: R$ ");
	fflush(stdout);
	scanf("%f", &venda);

	vista = venda - (venda * 10 / 100);
	comissaoVista = vista * 5 / 100;

	prazo = venda / 3;
	comissaoPrazo = venda * 5 / 100;

	printf("\nA vista com desconto: R$ %.2f", vista);
	printf("\nComissao Venda a vista: R$ %.2f", comissaoVista);

	printf("\n\nA prazo em 3x: R$ %.2f", prazo);
	printf("\nComissao Venda a prazo: R$ %.2f", comissaoPrazo);

	return 0;
}
