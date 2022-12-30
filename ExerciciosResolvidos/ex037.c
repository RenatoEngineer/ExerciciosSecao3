#include <stdio.h>

int main(){

	float produto;
	float desconto;
	float valorDesconto;

	printf("Digite o Valor do Produto: ");
	fflush(stdout);
	scanf("%f", &produto);

	printf("Digite o Valor do Desconto: ");
	fflush(stdout);
	scanf("%f", &desconto);

	valorDesconto = produto - (produto * (desconto/100));

	printf("O Valor do Produto com Desconto e: %.2f", valorDesconto);

	return 0;
}
