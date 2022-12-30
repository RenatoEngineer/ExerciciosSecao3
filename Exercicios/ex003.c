#include <stdio.h>

int main(){

	int num1;
	int num2;
	int num3;
	int soma;

	printf("Digite 3 numeros inteiros:\n");
	fflush(stdout);
	scanf("%d" "%d" "%d", &num1, &num2, &num3);

	soma = num1 + num2 + num3;

	printf("A soma e: %d", soma);

	return 0;
}
