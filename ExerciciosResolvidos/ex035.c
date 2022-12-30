#include <stdio.h>
#include <math.h>

int main(){

	float a;
	float b;
	float hipotenusa;

	printf("Digite o cateto a: ");
	fflush(stdout);
	scanf("%f", &a);

	printf("Digite o cateto b: ");
	fflush(stdout);
	scanf("%f", &b);

	hipotenusa = sqrt ((a * a) + (b * b));

	printf("A hipotenusa e: %.2f", hipotenusa);

	return 0;
}
