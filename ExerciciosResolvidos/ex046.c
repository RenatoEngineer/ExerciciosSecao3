#include <stdio.h>

int main(){

	int numero;
	int centena;
	int dezena;
	int unidade;
	int novoNumero;

	printf("Digite um numero Inteiro entre 100 e 999: ");
	fflush(stdout);
	scanf("%d", &numero);

	centena = numero % 10;         //Resto do número, dividido por 10.
	dezena = (numero % 100) / 10; //Resto do número dividido por 100, que em seguida é dividito por 10.
	unidade = numero / 100;      //Divisão do número por 100.

	novoNumero = centena * 100 + dezena * 10 + unidade;

	printf("\nOs numeros Invetido e: %d", novoNumero);

	return 0;
}
