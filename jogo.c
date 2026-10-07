#include <stdio.h>
#include <stdlib.h>

int main()
{
	int esc_player;
	int i = 1;
	int esc_comp;
	int plc_player = 0;
	int plc_comp = 0;


	while(i <= 3) {
		printf("-----------------------------------------------------------\n");
		printf("--> Placar Atual: jogador: %d computador: %d <-- \n", plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("\n");
		printf("RODADA %d de 3:\n", i);

		printf("1- PEDRA | 2- PAPEL | 3- TESOURA \n");
		printf("Escolha: ");
		scanf("%d", &esc_player);
		printf("\n");

		if(esc_player > 3 || esc_player <= 0) {
			printf("ERRO escolha os numeros apresentados na tela! Digite novamente \n");
			printf("\n");
			printf("-----------------------------------------------------------\n");
			continue;

		} else {
			if(esc_player == 1) {
				printf("Voce jogou: %d- PEDRA \n", esc_player);
			} else if(esc_player == 2) {
				printf("Voce jogou: %d- PAPEL \n", esc_player);
			} else {
				printf("Voce jogou: %d- TESOURA \n", esc_player);
			}
			esc_comp = (rand() % 3) + 1;
			if(esc_comp == 1) {
				printf("O computador jogou: %d- PEDRA \n", esc_comp);
			} else if(esc_comp == 2) {
				printf("O computador jogou: %d- PAPEL \n", esc_comp);
			} else {
				printf("O computador jogou: %d- TESOURA \n", esc_comp);
				printf("\n");
				printf("============================================================\n");


			}
			printf("RESULTADO DA RODADA %d de 3: \n", i);
			if(esc_player == 1 && esc_comp == 3) {
				printf("Voce ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == 2 && esc_comp == 1) {
				printf("Voce ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == 3 && esc_comp == 2) {
				printf("Voce ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == esc_comp) {
				printf("Empate na rodada! Digite novamente!\n");
				continue;
			} else {
				printf("O computador ganhou a rodada!\n");
				plc_comp++;
			}
			i++;
		}

	}
	if(plc_player > plc_comp) {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Voce ganhou!!\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar Final: jogador: %d computador: %d <--\n", plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");

	} else if(plc_player == plc_comp) {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Empate\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar Final: jogador: %d computador: %d <--\n", plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");

	} else {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Computador ganhou!\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar Final: jogador: %d computador: %d <--\n", plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");

	}


	return 0;
}