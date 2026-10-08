#include <stdio.h>
#include <stdlib.h>

int main() {
    char player_nome[20];
	int esc_player; 
	int rodada = 1; 
	int esc_comp; 
	int plc_player = 0;
	int plc_comp = 0;

    printf("-----------------------------------------------------------\n");
    printf("Vamos jogar Pedra, Papel e Tesoura!\n");
    printf("-----------------------------------------------------------\n");
    printf("Digite o seu nome: ");
    scanf("%s", &player_nome);

	for (rodada = 1; rodada <= 3; rodada++) { 
		printf("-----------------------------------------------------------\n");
		printf("--> Placar: %s: %d computador: %d <-- \n", player_nome, plc_player, plc_comp); 
		printf("-----------------------------------------------------------\n");
		printf("\n"); 
		printf("RODADA %d:\n", rodada); 

		printf("1- PEDRA | 2- PAPEL | 3- TESOURA \n"); 
		printf("Escolha: ");
		scanf("%d", &esc_player);
		printf("\n");

		while (esc_player > 3 || esc_player <= 0) {
			printf("ERRO escolha os numeros apresentados na tela! Digite novamente \n");
			printf("\n");
			printf("-----------------------------------------------------------\n");
		    }
		
			if(esc_player == 1) {
				printf("Você jogou: %d- PEDRA \n", esc_player);
			} else if(esc_player == 2) {
				printf("Você jogou: %d- PAPEL \n", esc_player);
			} else {
				printf("Você jogou: %d- TESOURA \n", esc_player);
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
            
            printf("\n");
            
			printf("RESULTADO DA RODADA %d/3: \n", rodada); 
			
			if(esc_player == 1 && esc_comp == 3) {
				printf("Você ganhou a rodada!\n"); 
				plc_player++;                      
			} else if(esc_player == 2 && esc_comp == 1) {
				printf("Você ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == 3 && esc_comp == 2) {
				printf("Você ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == esc_comp) {
				printf("Empate na rodada!\n");
				plc_player++;
				plc_comp++;
			} else {
				printf("O computador ganhou a rodada!\n");
				plc_comp++; 
			}
			
			printf("\n");
	}
	
	if (plc_player > plc_comp) {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("%s ganhou!!!\n", player_nome);
		printf("-----------------------------------------------------------\n");
		printf("--> Placar: %s: %d computador: %d <-- \n", player_nome, plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");
	} else if(plc_player == plc_comp) {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Empate\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar: %s: %d computador: %d <-- \n", player_nome, plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");

	} else {
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Computador ganhou!\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar: %s: %d computador: %d <-- \n", player_nome, plc_player, plc_comp);
		printf("-----------------------------------------------------------\n");
		printf("FIM DE JOGO!");

	}


	return 0;
}
