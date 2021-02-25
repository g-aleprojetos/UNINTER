
/*
 * CENTRO UNIVERSITARIO INTERNACIONAL UNINTER
 * CURSO: Tecnologia em Desenvolvimento de Aplicativos para Dispositivos Móveis
 * MATÉRIA: Lógica de programação e algoritmos
 *
 * 
 * 
 *
 * ATIVIDADE PRÁTICA
 * EXERCICIO 01
 *  O programa inicializa mostrando um menu com os itens e seus valores respectivos, o usuário faz o 
  pedido e a quantidade. O programa mostra uma lista com o item, a quantidade, o subtotal e o total. 
  Colocando qualquer outro caractere não sendo um dos itens do menu ele finaliza a compra e mostra 
  lista.
 * DATA DA ATUALIZAÇÃO: 17/072020
*/

//*** bibliotecas ***//
#include<stdio.h>
#include<stdlib.h>

//*** funções auxiliares ***//
void mostrarTela();
void mostrarValor();
void caso();
void finalizarPrograma();
void cachorroQuente();
void xSalada();
void xBacon();
void misto();
void salada();
void agua();
void refrigerante();

//*** variaveis ***//
bool laco = 1;
int c, opcao, auxCachorroQuente, auxXsalada, auxXbacon, auxMisto,
auxSalada, auxAgua, auxRefrigerante, item;
int vetor[7];
float valorCachorroquente = 5;
float valorXsalada = 8.79;
float valorXbacon = 9.99;
float valorMisto = 6.89;
float valorSalada = 4.80;
float valorAgua = 3.49;
float valorRefrigerante = 4.99;
float subValorCachorroQuente, subValorXsalada, subValorXbacon, subValorMisto,
subValorSalada, subValorAgua, subValorRefrigerante, total;

//*** função principal ***//
int main() {

	while (laco == 1) {

		//mostra o menu na tela
		mostrarTela();
		//mensagem para o usuário digitar o número do pedido
		printf("\n\n               Digite o Numero do pedido: ");
		scanf_s("%d", &opcao);//pega o valor digitado pelo usuário e coloca na variavel opcao
		while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
		//preenche o valor do vetor
		for (int i = 0; i <= 6; i++) {

			if (vetor[i] == 0) {

				vetor[i] = opcao;//coloca o valor da variavel opcao no primeiro vetor vazio

				i = 9;//interrompe o laço for
			}
			else if (opcao == vetor[i]) {//se tiver um valor da variavel opcao repitido sai do laço sem repetir o valor

				i = 9;//interrompe o laço for
			}
		}
		caso();//chama a função void caso
	}
	system("pause");
	return 0;
}
/*** função caso ***/
void caso() {

	switch (opcao)//chama a função decorrente a opção que o usuário digita
	{

	case 1:
		cachorroQuente();
		break;

	case 2:
		xSalada();
		break;

	case 3:
		xBacon();
		break;

	case 4:
		misto();
		break;

	case 5:
		salada();
		break;

	case 6:
		agua();
		break;

	case 7:
		refrigerante();
		break;

	default:
		finalizarPrograma();
		break;
	}
}

void mostrarTela() {//Função que mostrana tela o menu.


	printf_s("\n\n");
	printf("\n               DIGITE UM NUMERO DE 1 A 7 DO MENU PARA FAZER O PEDIDO.              \n");

	printf("\n               *********************** MENU ************************ \n");
	printf("\n               |item|  produto          | Codigo |  Preco Unitario | \n");
	printf("\n               | 1  |  Cachorro-quente  |  100   |      5,00       | \n");
	printf("\n               | 2  |  X-Salada         |  101   |      8,79       | \n");
	printf("\n               | 3  |  X-bacon          |  102   |      9,99       | \n");
	printf("\n               | 4  |  Misto            |  103   |      6,89       | \n");
	printf("\n               | 5  |  Salada           |  104   |      4,48       | \n");
	printf("\n               | 6  |  Agua             |  105   |      3,49       | \n");
	printf("\n               | 7  |  Refrigerante     |  106   |      4,99       | \n");
	printf("\n               ***************************************************** \n");

	printf("\n                DIGITE QUALQUER OUTRO NUMERO PARA FINALIZAR.         \n");

	mostrarValor();
}

void finalizarPrograma() { // Função de encerramento do programa

	laco = 0;             // muda o status da variavel para sair do laço e finalizar o projeto
	system("cls");
	printf_s("\n\n\n\n\n");
	printf("\n       ************************* PEDIDO FINALIZADO ************************ \n");
	mostrarValor();
	printf("\n       ******************************************************************** \n");
	printf_s("\n\n\n\n\n");
}

void cachorroQuente() { //Função para pegar o valor digitado de quantidade de cachorro quente.

	printf("\n               Cachorro Quente escolhido \n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxCachorroQuente);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

	system("cls");
}

void xSalada() {//Função para pegar o valor digitado de quantidade de X salada.

	printf("\n               X-Salada escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxXsalada);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void xBacon() {//Função para pegar o valor digitado de quantidade de X bacon.

	printf("\n               X-Bacon escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxXbacon);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void misto() {//Função para pegar o valor digitado de quantidade de misto.

	printf("\n               Misto escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxMisto);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void salada() {//Função para pegar o valor digitado de quantidade de salada.

	printf("\n               Salada escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxSalada);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void agua() {//Função para pegar o valor digitado de quantidade de agua.

	printf("\n               Agua escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxAgua);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void refrigerante() {//Função para pegar o valor digitado de quantidade de refrigerante.

	printf("\n               Refrigerante escolhido\n");
	printf("\n               digite a quantidade:  ");
	scanf_s("%d", &auxRefrigerante);
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
	system("cls");
}

void mostrarValor() {//Função que mostra na tela os produtos e seus valores.

	if ((auxCachorroQuente > 0) || (auxXsalada > 0) || (auxXbacon > 0) || (auxMisto) || (auxSalada) || (auxAgua > 0) || (auxRefrigerante > 0)) {

		printf_s("\n\n");
		printf("         ITEM       QUANT     PRODUTO            VALOR UNITARIO   SUBTOTAL\n");
		printf("       ESCOLHIDO                                                          \n");
		printf("                                                                          \n");
	}

	/*** Calculo subvalor pegando a quantidade multiplicado pelo valor unitario. ***/
	subValorCachorroQuente = auxCachorroQuente * valorCachorroquente;
	subValorXsalada = auxXsalada * valorXsalada;
	subValorXbacon = auxXbacon * valorXbacon;
	subValorMisto = auxMisto * valorMisto;
	subValorSalada = auxSalada * valorSalada;
	subValorAgua = auxAgua * valorAgua;
	subValorRefrigerante = auxRefrigerante * valorRefrigerante;

	for (int i = 0; i <= 6; i++) {//coloca o resultado na ordem que foi solicitado

		/*** Mostra o valores do cachorro quente. ***/
		if (vetor[i] == 1) {

			if ((auxCachorroQuente > 0) && (auxCachorroQuente < 10)) { // mostra valores de 1 a 9

				if (auxCachorroQuente == 1) {
					printf("           1 ");
					printf("        %d        Cachorro Quente         %.2f            %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
				else {
					printf("           1 ");
					printf("        %d        Cachorro Quente         %.2f           %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
			}
			else if ((auxCachorroQuente >= 10) && (auxCachorroQuente < 100)) { // mostra valores de 10 a 99

				if (auxCachorroQuente < 20) {

					printf("           1 ");
					printf("        %d       Cachorro Quente         %.2f           %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
				else {

					printf("           1 ");
					printf("        %d       Cachorro Quente         %.2f          %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
			}
			else if ((auxCachorroQuente >= 100) && (auxCachorroQuente < 1000)) { // mostra valores de 100 a 999

				if (auxCachorroQuente < 200) {

					printf("           1 ");
					printf("        %d      Cachorro Quente         %.2f          %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
				else {

					printf("           1 ");
					printf("        %d      Cachorro Quente         %.2f         %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
				}
			}
			else if (auxCachorroQuente >= 1000) {// mostra valores acima de 1000

				printf("           1 ");
				printf("        %d     Cachorro Quente         %.2f         %.2f\n", auxCachorroQuente, valorCachorroquente, subValorCachorroQuente);
			}
		}//fim if vetor[i] == 1

		/*** Mostra os valores do X Salada. ***/
		if (vetor[i] == 2) {

			if ((auxXsalada > 0) && (auxXsalada < 10)) { // mostra valores de 1 a 9

				if (auxXsalada == 1) {

					printf("           2 ");
					printf("        %d        X-Salada                %.2f            %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
				else {

					printf("           2 ");
					printf("        %d        X-Salada                %.2f           %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
			}
			else if ((auxXsalada >= 10) && (auxXsalada < 100)) {// mostra valores de 10 a 99

				if (auxXsalada < 12) {

					printf("           2 ");
					printf("        %d       X-Salada                %.2f           %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
				else {

					printf("           2 ");
					printf("        %d       X-Salada                %.2f          %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
			}
			else if ((auxXsalada >= 100) && (auxXsalada < 1000)) {// mostra valores de 100 a 999

				if (auxXsalada < 114) {

					printf("           2 ");
					printf("        %d      X-Salada                %.2f          %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
				else {

					printf("           2 ");
					printf("        %d      X-Salada                %.2f         %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
				}
			}
			else if (auxXsalada >= 1000) {// mostra valores acima de 1000

				printf("           2 ");
				printf("        %d     X-Salada                %.2f         %.2f\n", auxXsalada, valorXsalada, subValorXsalada);
			}
		}//fim vetor[i] == 2

		/*** Mostra os valores do X Bacon. ***/
		if (vetor[i] == 3) {

			if ((auxXbacon > 0) && (auxXbacon < 10)) {//mostra valores de 1 a 9

				if (auxXbacon == 1) {

					printf("           3 ");
					printf("        %d        X-Bacon                 %.2f            %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
				else {

					printf("           3 ");
					printf("        %d        X-Bacon                 %.2f           %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
			}
			else if ((auxXbacon >= 10) && (auxXbacon < 100)) {// mostra valores 10 a 99

				if (auxXbacon < 11) {

					printf("           3 ");
					printf("        %d       X-Bacon                 %.2f           %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
				else {

					printf("           3 ");
					printf("        %d       X-Bacon                 %.2f          %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
			}
			else if ((auxXbacon >= 100) && (auxXbacon < 1000)) {// mostra valores de 100 a 999

				if (auxXbacon == 100) {

					printf("           3 ");
					printf("        %d      X-Bacon                 %.2f          %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
				else {

					printf("           3 ");
					printf("        %d      X-Bacon                 %.2f         %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
				}
			}
			else if (auxXbacon >= 1000) {// mostra acima de 1000

				printf("           3 ");
				printf("        %d     X-Bacon                 %.2f         %.2f\n", auxXbacon, valorXbacon, subValorXbacon);
			}
		}//fim vetor[i] == 3

		/*** Mostra os valores do Misto. ***/
		if (vetor[i] == 4) {

			if ((auxMisto > 0) && (auxMisto < 10)) { //mostra os valores de 1 a 9

				if (auxMisto == 1) {

					printf("           4 ");
					printf("        %d        Misto                   %.2f            %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
				else {

					printf("           4 ");
					printf("        %d        Misto                   %.2f           %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
			}
			else if ((auxMisto >= 10) && (auxMisto < 100)) { // mostra valores de 10 a 99

				if (auxMisto < 15) {

					printf("           4 ");
					printf("        %d       Misto                   %.2f           %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
				else {

					printf("           4 ");
					printf("                %d       Misto                   %.2f          %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
			}
			else if ((auxMisto >= 100) && (auxMisto < 1000)) { // Mostra valores de 100 a 999

				if (auxMisto < 146) {

					printf("           4 ");
					printf("        %d      Misto                   %.2f          %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
				else {

					printf("           4 ");
					printf("        %d      Misto                   %.2f         %.2f\n", auxMisto, valorMisto, subValorMisto);
				}
			}
			else if (auxMisto >= 1000) { // mostra valores acima de 1000

				printf("           4 ");
				printf("        %d     Misto                   %.2f         %.2f\n", auxMisto, valorMisto, subValorMisto);
			}
		}//fim vetor[i] == 4

		/*** Mostra os valores da salada. ***/
		if (vetor[i] == 5) {

			if ((auxSalada > 0) && (auxSalada < 10)) { // mostra valores de 1 a 9

				if (auxSalada < 3) {

					printf("           5 ");
					printf("        %d        Salada                  %.2f            %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
				else {

					printf("           5 ");
					printf("        %d        Salada                  %.2f           %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
			}
			else if ((auxSalada >= 10) && (auxSalada < 100)) { // mostra valores de 10 a 99
				if (auxSalada < 21) {

					printf("           5 ");
					printf("        %d       Salada                  %.2f           %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
				else {

					printf("           5 ");
					printf("        %d       Salada                  %.2f          %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
			}
			else if ((auxSalada >= 100) && (auxSalada < 1000)) { // mostra valores de 100 a 999

				if (auxSalada < 209) {

					printf("           5 ");
					printf("        %d      Salada                  %.2f          %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
				else {

					printf("           5 ");
					printf("        %d      Salada                  %.2f         %.2f\n", auxSalada, valorSalada, subValorSalada);
				}
			}
			else if (auxSalada >= 1000) { // mostra valores acima de 1000

				printf("           5 ");
				printf("        %d     Salada                  %.2f         %.2f\n", auxSalada, valorSalada, subValorSalada);
			}
		}//fim vetor[i] == 5

		/*** Mostra os valores da agua. ***/
		if (vetor[i] == 6) {

			if ((auxAgua > 0) && (auxAgua < 10)) { // mostra valores de 1 a 9

				if (auxAgua < 3) {

					printf("           6 ");
					printf("        %d        Agua                    %.2f            %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
				else {

					printf("           6 ");
					printf("        %d        Agua                    %.2f           %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
			}
			else if ((auxAgua >= 10) && (auxAgua < 100)) { // mostra calores de 10 a 99

				if (auxAgua < 29) {

					printf("           6 ");
					printf("        %d       Agua                    %.2f           %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
				else {

					printf("           6 ");
					printf("        %d       Agua                    %.2f          %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
			}
			else if ((auxAgua >= 100) && (auxAgua < 1000)) { // mostra valores de 100 a 999

				if (auxAgua < 287) {

					printf("           6 ");
					printf("        %d      Agua                    %.2f          %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
				else {

					printf("           6 ");
					printf("        %d      Agua                    %.2f         %.2f\n", auxAgua, valorAgua, subValorAgua);
				}
			}
			else if (auxAgua >= 1000) {// mostra valores acima de 1000

				printf("           6 ");
				printf("        %d     Agua                    %.2f         %.2f\n", auxAgua, valorAgua, subValorAgua);
			}
		}//fim vetor[i] == 6

		/*** Mostra os valores do refrigerante. ***/
		if (vetor[i] == 7) {

			if ((auxRefrigerante > 0) && (auxRefrigerante < 10)) {// mostra valores de 1 a 9

				if (auxRefrigerante < 3) {

					printf("           7 ");
					printf("        %d        Refrigerante            %.2f            %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
				else {

					printf("           7 ");
					printf("        %d        Refrigerante            %.2f           %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
			}
			else if ((auxRefrigerante >= 10) && (auxRefrigerante < 100)) {// mostra valores de 10 a 99

				if (auxRefrigerante < 21) {

					printf("           7 ");
					printf("        %d       Refrigerante            %.2f           %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
				else {

					printf("           7 ");
					printf("        %d       Refrigerante            %.2f          %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
			}
			else if ((auxRefrigerante >= 100) && (auxRefrigerante < 1000)) {// mostra valores de 100 a 999

				if (auxRefrigerante < 201) {

					printf("           7 ");
					printf("        %d      Refrigerante            %.2f          %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
				else {

					printf("           7 ");
					printf("        %d      Refrigerante            %.2f         %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
				}
			}
			else if (auxRefrigerante >= 1000) {// mostra valores acima de 1000

				printf("           7 ");
				printf("        %d     Refrigerante            %.2f         %.2f\n", auxRefrigerante, valorRefrigerante, subValorRefrigerante);
			}
		}//fim vetor[i] == 7
		/*** soma o valores dos itens e coloca na variavel total ***/
		total = subValorCachorroQuente + subValorXsalada + subValorXbacon + subValorMisto + subValorSalada + subValorAgua + subValorRefrigerante;

	}// fim laço for

	/*** Mostra os valores do totais. ***/
	if ((auxCachorroQuente > 0) || (auxXsalada > 0) || (auxXbacon > 0) || (auxMisto) || (auxSalada) || (auxAgua > 0) || (auxRefrigerante > 0)) {

		printf_s("\n");

		if ((total > 0) && (total < 10)) {// mostra valores de 1 a 9

			printf("                                                     TOTAL = R$       %.2f\n", total);
		}
		else if ((total >= 10) && (total < 100)) {// mostra valores de 10 a 99

			printf("                                                     TOTAL = R$      %.2f\n", total);
		}
		else if ((total >= 100) && (total < 1000)) {// mostra valores de 100 a 999

			printf("                                                     TOTAL = R$     %.2f\n", total);
		}
		else if ((total >= 1000) && (total < 10000)) {// mostra valores de 1000 a 9999

			printf("                                                     TOTAL = R$    %.2f\n", total);
		}
		else if (total > 10000) {// mostra valores acima de 10000

			printf("                                                     TOTAL = R$   %.2f\n", total);
		}
	}
}