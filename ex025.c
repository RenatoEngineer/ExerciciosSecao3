#include <stdio.h>

int main(){

	float acres;
	float metro2;

	printf("Digite a area em acres: ");
	fflush(stdout);
	scanf("%f", &acres);

	metro2 = acres * 4048.58;

	printf("A area em Metro Quadrado e: %.2f", metro2);

	return 0;
}
