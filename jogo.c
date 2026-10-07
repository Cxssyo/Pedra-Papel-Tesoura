#include <stdio.h>
#include <stdlib.h>

int main()
{
	int esc_player; // Variável onde ler a a escolha do jogador
	int i = 1; // Váriavel do contador, fica presente nas contagens das rodadas;
	int esc_comp;  // Váriavel da escolha da maquina por meio do rand()
	int plc_player = 0; // Váriavel que conta o placar do jogador
	int plc_comp = 0; // Váriavel que conta o placar do computador


	while(i <= 3) { // Laço de repetição
		printf("-----------------------------------------------------------\n");
		printf("--> Placar: jogador: %d computador: %d <-- \n", plc_player, plc_comp); // Imprime o placar atual do jogo
		printf("-----------------------------------------------------------\n");
		printf("\n"); // Quebra de linha
		printf("RODADA %d:\n", i);  // Imprime a rodada atual dentro do loop

		printf("1- PEDRA | 2- PAPEL | 3- TESOURA \n"); // Opções apresentadas para o jogador escolher
		printf("Escolha: "); // Escolha do jogador
		scanf("%d", &esc_player); // Leitura de dados que o jogador escolheu
		printf("\n");

		if(esc_player > 3 || esc_player <= 0) { // Uma condição caso o jogador escolher um numero maior do que 3 e menor igual a zero
			printf("ERRO escolha os numeros apresentados na tela! Digite novamente \n");
			printf("\n");
			printf("-----------------------------------------------------------\n");
			continue; // Aqui pula os códigos do loop para voltar nesse atual.
			//Caso estiver na rodada 2 e o usuario digitar incorretamente, ele pula o resto do loop e para na rodada atual.

		} else { // Aqui dara continuidade do jogo, caso o jogador escolha corretamente.
			if(esc_player == 1) { // Aqui são as condições nos numeros que o jogador colocou, sendo cada uma, imprimindo a opção que escolheu.
				printf("Voce jogou: %d- PEDRA \n", esc_player);
			} else if(esc_player == 2) {
				printf("Voce jogou: %d- PAPEL \n", esc_player);
			} else {
				printf("Voce jogou: %d- TESOURA \n", esc_player);
			}
			esc_comp = (rand() % 3) + 1; // Aqui a função para a maquina escolher os numeros de 1 a 3.
			if(esc_comp == 1) { // Aqui são as condições nos numeros que o computador colocou, sendo cada uma, imprimindo a opção que escolheu.
				printf("O computador jogou: %d- PEDRA \n", esc_comp);
			} else if(esc_comp == 2) {
				printf("O computador jogou: %d- PAPEL \n", esc_comp);
			} else {
				printf("O computador jogou: %d- TESOURA \n", esc_comp);
				printf("\n");
				printf("============================================================\n");


			}
			printf("RESULTADO DA RODADA %d/3: \n", i); // Aqui é o resultado da rodada, contendo aa variavel do contador.
			if(esc_player == 1 && esc_comp == 3) {
				printf("Voce ganhou a rodada!\n"); // São as condições onde vai definir quem ganhou a rodada
				plc_player++;                      // Incremento dos pontos caso o jogador ganhe na rodada.
			} else if(esc_player == 2 && esc_comp == 1) {
				printf("Voce ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == 3 && esc_comp == 2) {
				printf("Voce ganhou a rodada!\n");
				plc_player++;
			} else if(esc_player == esc_comp) {
				printf("Empate na rodada! Jogue de novo!\n"); // Caso houver empate nas jogadas, com o 'continue', o jogador vai repitir a jogada até desempatar na rodada 
				continue;
			} else {
				printf("O computador ganhou a rodada!\n");
				plc_comp++; // Incremento dos pontos caso o computador ganhe na rodada.
			}
			i++; // Incremento nas rodadas 
		}

	}
	if(plc_player > plc_comp) {  // Condição sobre os placares ao terminar as 3 rodadas.
		printf("-----------------------------------------------------------\n");
		printf("RESULTADO FINAL:\n");
		printf("Voce ganhou!!\n");
		printf("-----------------------------------------------------------\n");
		printf("--> Placar Final: jogador: %d computador: %d <--\n", plc_player, plc_comp); // Placar final
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