#include <stdio.h>

int main(){

	int horas;
	int minutos;
	int segundos;

	printf("Digite os Segundos: ");
	fflush(stdout);
	scanf("%d", &segundos);

	horas = segundos / 3600; //Uma hora tem 3600 segundos.
	minutos = (segundos - (horas * 3600)) / 60;
	segundos = segundos - (horas * 3600) - (minutos * 60);

	printf("\n%dH:%dM:%dS", horas, minutos, segundos);

	return 0;
}
