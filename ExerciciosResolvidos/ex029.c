#include <stdio.h>

int main(){

	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;

	printf("Digite quatro notas: ");
	fflush(stdout);
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

	media = (nota1 + nota2 + nota3 + nota4) / 4;

	printf("A media aritmetica e: %.2f", media);

	return 0;
}
