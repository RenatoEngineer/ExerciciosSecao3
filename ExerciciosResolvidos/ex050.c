#include <stdio.h>

int main(){

	int idadeAtual;
	int anoAtual;
	int anoNascimento;

	printf("Digite sua Idade Atual: ");
	fflush(stdout);
	scanf("%d", &idadeAtual);

	printf("\nDigite o Ano Atual com 4 digitos: ");
	fflush(stdout);
	scanf("%d", &anoAtual);

	anoNascimento = anoAtual - idadeAtual;

	printf("\nVoce Nasceu no Ano: %d", anoNascimento);

	return 0;
}
