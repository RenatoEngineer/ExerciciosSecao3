#include <stdio.h>

int main(){

	int horasInicial;
	int minutosInicial;
	int segundosInicial;

	int duracao;

	int horas;
	int minutos;
	int segundos;

	int horasFinal;
	int minutosFinal;
	int segundosFinal;

	printf("Digite a Hora Inicial: "); //Horas : Minutos : Segundos - Separado por espaço.
	fflush(stdout);
	scanf("%d%d%d", &horasInicial, &minutosInicial, &segundosInicial);

	printf("\nDigite a Duracao da Experiencia em Segundos: ");
	fflush(stdout);
	scanf("%d", &duracao);

	/* Uma hora tem 3600 segundos */

	horas = duracao / 3600;
	minutos = (duracao - (horas * 3600)) / 60;
	segundos = duracao - (horas * 3600) - (minutos * 60);

	horasFinal = horasInicial + horas;
	minutosFinal = minutosInicial + minutos;
	segundosFinal = segundosInicial + segundos;

	printf("\nA hora Final e: %d:%d:%d", horasFinal, minutosFinal, segundosFinal);

	return 0;
}
