#include <stdio.h>

int main(){

	float raio;
	float altura;
	float volume;

	printf("Digite a Altura do Cilindro: ");
	fflush(stdout);
	scanf("%f", &altura);

	printf("Digite o Raio do Cilindro: ");
	fflush(stdout);
	scanf("%f", &raio);

	volume = 3.141592 * (raio * raio) * altura;

	printf("O Volume do Cilindro e: %.2f", volume);

	return 0;
}
