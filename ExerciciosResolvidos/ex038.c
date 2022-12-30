#include <stdio.h>

int main(){

	float salarioAtual;
	float aumento;

	printf("Digite o Salario Atual do Funcionario: ");
	fflush(stdout);
	scanf("%f", &salarioAtual);

	aumento = salarioAtual + (salarioAtual * 0.25);

	printf("O Salario do Funcionario com Aumento e: %.2f", aumento);


	return 0;
}
