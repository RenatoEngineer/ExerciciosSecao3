#include <stdio.h>

int main(){

	//int numero;
	int milhar;
	int centena;
	int dezena;
	int unidade;

	printf("Digite um numero Inteiro entre 1000 e 9999: ");
	fflush(stdout);
	scanf("%1d%1d%1d%1d", &milhar, &centena, &dezena, &unidade);

	printf("\n%d\n%d\n%d\n%d", milhar, centena, dezena, unidade);

	return 0;
}
