//Bibliotecas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

#define QTD_FILEIRAS 9
#define QTD_CADEIRAS 11

//Método que preenche array que sera exibido
void PreencheArray(char cadeiras[][QTD_CADEIRAS], char tipoCaractere = 'O') {
	if (cadeiras[0][0] == NULL) { {}
		for (int i = 0; i < QTD_FILEIRAS; i++) {
			for (int n = 0; n < QTD_CADEIRAS; n++) {
				cadeiras[i][n] = 'O';
			}
		}
	}
}

//Método que mostra as cadeiras
void Mostrar(char cadeiras[][QTD_CADEIRAS]) {
	PreencheArray(cadeiras);
	for (int i = 0; i < QTD_FILEIRAS; i++) {
		if (i == 0) printf("   ");
		else printf(" %i ", i);
		
        for (int j = 1; j < QTD_CADEIRAS; j++) {
			if (i == 0) printf(" %d", j);
			else printf(" %c", cadeiras[i][j]);
		}
		printf("\n\n");
	}
}



//Método principal
int main() {
	setlocale(LC_ALL, "Portuguese");

	enum { Reservar = 1, Cancelar, Situacao, Operador, Sair };
	enum { Faturamento = 1, Mudar_Valor_Ingresso };

	char cadeiras[QTD_FILEIRAS][QTD_CADEIRAS] = { { NULL } };
	int escolhaUsuario = 0, lugaresOcupados = 0, escolhaOperador = 0, fileira = 0, assento = 0;
	float valorIngresso = 10.50, faturamentoTotal = 0;

	do {
		printf(" Na tela aparecerão as poltronas livres (O) e as já ocupadas (X)\n\n");

		Mostrar(cadeiras);

		printf("Escolha uma opção: \n\n");
		printf("1 - RESERVAR CADEIRA \n 2 - CANCELAR RESERVA \n 3 - SITUAÇÃO DA SALA \n 4 - FUNÇÕES DO OPERADOR \n 5 - DESLIGAR SISTEMA\n");

		scanf("%i", &escolhaUsuario);
		
		if (escolhaUsuario == Reservar) {
			printf("PREÇO DO INGRESSO:R$ %f \n NÃO SERÁ DEVOLVIDO O VALOR CASO HAJA CANCELAMENTO DE RESERVA\n", valorIngresso);
			printf("Digite a fileira e após a coluna que quer deseja reservar:\n");
			printf("Fileira:");
			scanf("%d", &fileira);
			printf("Cadeira:");
			scanf("%d", &assento);

			if (cadeiras[fileira][assento] == 'X') {
				printf("ERRO, LUGAR JÁ OCUPADO\n");
				system("pause");
			}
			else {
				if ((fileira < 0) || (fileira>9) || (assento < 1) || (assento>7)) {
					printf("ERRO, LUGAR NÃO ENCONTRADO\n");
					system("pause");
				}
				else {
					cadeiras[fileira][assento] = 'X';
					printf("Seu lugar foi reservado com sucesso!\n");
					
					faturamentoTotal = faturamentoTotal + valorIngresso;
					lugaresOcupados++;
				}
			}
		}
		else if (escolhaUsuario == Cancelar) {

			printf("Escolha o número do assento a ser cancelada a reserva.\n");
			printf("Fileira:");
			scanf("%d", &fileira);
			printf("Coluna:");
			scanf("%d", &assento);
			if (cadeiras[fileira][assento] == 'X') {
				cadeiras[fileira][assento] = 'O';
			}
			else {
				printf("Cadeira não ocupada ainda\n");
			}
		}
		else if (escolhaUsuario == Situacao) {
			printf("O número de lugares ocupados é %d e de lugares vazios é %d\n", lugaresOcupados, ((QTD_FILEIRAS-1)*(QTD_CADEIRAS-1))-lugaresOcupados);
		}
		else if (escolhaUsuario == Operador) {

			printf("Escolha a opção:\n 1 - FATURAMENTO\n 2 - PREÇO DO INGRESSO\n");
			scanf("%d", &escolhaOperador);
			if (escolhaOperador == Faturamento) {
				printf("o faturamento atual é de R$ %.2f\n", faturamentoTotal);
			}
			else {
				if (escolhaOperador == Mudar_Valor_Ingresso) {
					printf("Digite o preço do ingresso:\n");
					scanf("%f", &valorIngresso);
					printf("O preço atualizado do ingresso é %.2f\n", valorIngresso);
				}
			}
		}
		else if (escolhaUsuario == Sair) {
			break;
		}
		else {
			printf("ERRO, TECLA NÃO ENCONTRADA, DIGITE NOVAMENTE\n");
		}
		system("pause");
		system("cls");
	} while (escolhaUsuario != Sair);
}

