#include <stdio.h>

int main(){

	float premio = 780.000;
	float ganh1;   //Primeiro Ganhador receber� 46%
	float ganh2;  //Segundo Ganhador receber� 32%
	float ganh3; //Terceiro Ganhador receber� 22%

	printf("### Valor do Premio e: R$ %.3f ###\n", premio);

	printf("\n.:: Premio divido para 3 Ganhadores ::.\n");

	ganh1 = premio * 0.46;
	ganh2 = premio * 0.32;
	ganh3 = premio * 0.22;

	printf("\nPrimeiro Ganhador Recebera: R$ %.3f", ganh1);
	printf("\nSegundo Ganhador Recebera: R$ %.3f", ganh2);
	printf("\nTerceiro Ganhador Recebera: R$ %.3f", ganh3);

	return 0;
}
