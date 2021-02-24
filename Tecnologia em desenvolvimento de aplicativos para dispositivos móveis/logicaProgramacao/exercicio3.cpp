
/*
 * CENTRO UNIVERSITARIO INTERNACIONAL UNINTER
 * CURSO: Tecnologia em Desenvolvimento de Aplicativos para Dispositivos Móveis
 * MATÉRIA: Lógica de programação e algoritmos
 *
 * 
 * 
 *
 * ATIVIDADE PRÁTICA
 * EXERCICIO 03
 *  O programa pede valores para montar o tamanho da matriz, depois pede para digitar caracteres. Ao 
  finalizar vai mostrar na tela a matriz montada, a quantidade de vezes apareceu cada caracter, vai 
  mostrar o primeiro caracter digitado e dizer se é maiusculo ou minusculo e vai retornar um dado se for
  maiusculo o retorno será dividido por 10. Se for minusculo o dado retornado será multiplicado por 2.

 * DATA DA ATUALIZAÇÃO: 17/072020
*/


// ** Bibliotecas **//
#include<stdio.h>
#include<stdlib.h>

// ** funções auxiliares **//
void digQuantMxN();
void digDadosMatriz();
void imprimirMatriz();
void mostraOcorrenciaCaracteres();
void manipulaDado();

// *** variaveis **//
int i, j, k, m, n, c, x, indice, cont;
float pri, resultado;
char str[10][10], vetor[100], aux;

// ** função principal **//
int main() {

	digQuantMxN();//Função pede para o usuário digitar os valores de linha e coluna da matriz.

	printf("\n\n");//pula duas linhas para organização.

	digDadosMatriz();//Função pede para o usuário digite os valores da matriz.

	printf("\n");//pula duas linhas para organização.

	imprimirMatriz();//Função que imprime a matriz.

	printf("\n\n");//pula duas linhas para organização.

	mostraOcorrenciaCaracteres();//Função que mostra as ocorrencias dos caracteres

	printf("\n\n");//pula duas linhas para organização.

	manipulaDado();//função manipula o primeiro dados da matriz.

	printf("\n\n");//pula duas linhas para organização.

	system("pause");
	return 0;
}

// *** função para digitar a quantidade de linha e coluna **//
void digQuantMxN() {

	do {
		//imprime instrucões ao usuário
		printf(" \n\n   Digite a quantidade de linhas de 1 a 10: ");
		scanf_s("%d", &m);// amarzena o dado na variavel.
		while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

	} while (m < 1 || m > 10);// validação dos numeros de 1 a 10

	do {
		//imprime instrucões ao usuário
		printf(" \n\n   Digite a quantidade de colunas de 1 a 10: ");
		scanf_s("%d", &n);// amarzena o dado na variavel.
		while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

	} while (n < 1 || n > 10);// validação dos numeros de 1 a 10

}

// *** função para carregar dados na matriz **//
void digDadosMatriz() {

	for (i = 0; i < m; i++) {

		for (j = 0; j < n; j++) {
			
			//mostra para o usuario a posição que esta a matriz.
			printf("   Digite o caracter [%d] [%d]: ", i, j);
			scanf_s("%c", &str[i][j]);// amarzena o dado digitado pelo usuário e armazena na variavel.
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

		}
	}
}

// ** função imprime os dados da matriz **//
void imprimirMatriz() {
	
	// imprime mensagem para usuario 
	printf("   Matriz formada MxN.\n");

	for (i = 0; i < m; i++) {

		printf("    \n");//dá espaço na tela 
		
		//imprime o valor da matriz
		for (j = 0; j < n; j++) {

			printf("   %c\t", str[i][j]);

		}
	}
}

// ** função mostra as ocorrencias dos caracteres **//
void mostraOcorrenciaCaracteres() {

	indice = 0;// inicia a variavel em 0.
	
	//transforma a matriz em vetor
	for (i = 0; i < m; i++) {

		for (j = 0; j < n; j++) {

			vetor[indice] = str[i][j];
			indice++;

		}
	}

	for (i = 0; i < indice; i++) {
		for (j = i + 1; j < indice; j++) {
			if (vetor[i] > vetor[j]) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}

	cont = 1; //Se está na lista então aparece pelo menos 1 vez
	for (i = 1; i < indice; i++) { //Note que começa com i=1 para já comparar o segundo com o primeiro no if abaixo:
		if (vetor[i] == vetor[i - 1]) { //Se é igual ao anterior incrementa o contador
			cont++;
		}
		else { //Se mudou o número

			if (cont >= 2) {

				//Acabou de contar o número anterior então podemos imprimir
				//o número de vezes que ele aparece:
				printf("   O caracter %c aparece %d vezes!\n", vetor[i - 1], cont);

				//Recomeça a contagem para o novo número:
				cont = 1;

			}
			else {

				//Acabou de contar o número anterior então podemos imprimir
				//o número de vezes que ele aparece:
				printf("   O caracter %c aparece %d vez!\n", vetor[i - 1], cont);

				//Recomeça a contagem para o novo número:
				cont = 1;

			}
		}
	}

	if (cont >= 2) {

		//Também imprime para o último número:
		printf("   O caracter %c aparece %d vezes!\n", vetor[i - 1], cont);

	}
	else {

		//Também imprime para o último número:
		printf("   O caracter %c aparece %d vez!\n", vetor[i - 1], cont);

	}

}

// ** função manipula primeiro dado da matriz
void manipulaDado() {
	
	//imprime informações ao usuário
	pri = str[0][0];
	printf("   O primeiro caracter da matriz = \"%c\" \n", str[0][0]);

	if ((pri >= 65) && (pri <= 90)) {

		printf("   O caracter \"%c\" eh uma letra maiusculo", str[0][0]);
		resultado = pri / 10;
		printf("\n   A funcao pedida para esse tipo de caracter resulta em: %.1f ", resultado);
	}
	else {

		printf("   O caracter \" %c \" eh uma letra minuscula", str[0][0]);
		resultado = pri * 2;

		printf("\n   A funcao pedida para esse tipo de caracter resulta em: %.0f ", resultado);

	}
}