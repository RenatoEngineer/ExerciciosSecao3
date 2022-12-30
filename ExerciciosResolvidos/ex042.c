#include <stdio.h>

int main(){

	float salFunc;
	float gratific;
	float iR;
	float salRecb;

	printf("Digite o Salario Base do Funcionario: R$ ");
	fflush(stdout);
	scanf("%f", &salFunc);

	gratific = salFunc * 5 / 100; //Ou salFunc * 0.05
	iR = salFunc * 7 / 100; //Ou salFunc * 0.07
	salRecb = salFunc + gratific - iR;

	printf("\nO Funcionario tem a receber: R$ %.2f", salRecb);


	return 0;
}
