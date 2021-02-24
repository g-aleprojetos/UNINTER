
/*
 * CENTRO UNIVERSITARIO INTERNACIONAL UNINTER
 * CURSO: Tecnologia em Desenvolvimento de Aplicativos para Dispositivos Móveis
 * MATÉRIA: Lógica de programação e algoritmos
 *
 * 
 *  
 *
 * ATIVIDADE PRÁTICA
 * EXERCICIO 02
 *  O programa pede para dicionar o valor de um reservatório de água em milímetros, depois pede para adicionar a quantidade de chuva e o consumo de cada mês. Depois mostra a quantidade de água amarzenada e avisa se a caixa esta cheia ou vazia.  
 * DATA DA ATUALIZAÇÃO: 17/07/2020
*/

//*** bibliotecas ***//
#include<stdio.h>
#include<stdlib.h>

//*** funções auxiliares ***//
void janeiro();
void fevereiro();
void marco();
void abril();
void maio();
void junho();
void julho();
void agosto();
void setembro();
void outubro();
void novembro();
void dezembro();
void valores_janeiro();
void valores_fevereiro();
void valores_marco();
void valores_abril();
void valores_maio();
void valores_junho();
void valores_julho();
void valores_agosto();
void valores_setembro();
void valores_outubro();
void valores_novembro();
void valores_dezembro();

//*** variaveis ***//
bool fim = true;
int quantidadeMaxima, nivel, mut, c;
int jan[4], fev[4], mar[4], abr[4], mai[4], jun[4], jul[4], ago[4], set[4], out[4], nov[4], dez[4];

//*** função principal ***//
int main() {

	do{
		//imprime instrucões ao usuário
		printf("\n\n\n Digite a quantidade maxima em milimetros do reservatorio entre 10 a 99: ");
		scanf_s("%d", &quantidadeMaxima);// pega o valor digitado e adiciona na variavel
		while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
		
	// laço para aceitar semente numero de 10 a 99.
	} while ((quantidadeMaxima > 99) || (quantidadeMaxima < 10));

	//laço para chamar as funcões na ordem
	while (fim) {
		
		mut++;// variavel auxila a chamada dos meses na ordem

		switch (mut)
		{

		case 1: janeiro();
			break;

		case 2: fevereiro();
			break;

		case 3: marco();
			break;

		case 4: abril();
			break;

		case 5: maio();
			break;

		case 6: junho();
			break;

		case 7: julho();
			break;

		case 8: agosto();
			break;

		case 9: setembro();
			break;

		case 10: outubro();
			break;

		case 11: novembro();
			break;

		case 12: dezembro();
			break;

		default: fim = false;
			break;
		}
	}

	system("cls");// limpa a tela
	printf("\n\n\n\n");

	//imprime umatabela com todas as informações
	printf("\n/************************************************/");
	printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

	printf("\n * mes * quant chuva *   consumo   *    nivel    *");
	printf("\n *     *             *             *             *");

	valores_janeiro();
	valores_fevereiro();
	valores_marco();
	valores_abril();
	valores_maio();
	valores_junho();
	valores_julho();
	valores_agosto();
	valores_setembro();
	valores_outubro();
	valores_novembro();
	valores_dezembro();
	printf("\n\n/************************************************/\n\n");
	
	system("pause");
	return 0;
}

//*** funções auxiliares ***//
	void janeiro() {
		
		do {
		system("cls");// limpa a tela
		
			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm", quantidadeMaxima);
		
			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Janeiro ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jan[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

		// laço para não aceitar numero negativo
		} while (jan[0] < 0);

		do {
			// limpa a tela
			system("cls");
			
			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm", quantidadeMaxima);
			
			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Janeiro ");
			printf("\n   Nao pode haver numero negativo : %d ", jan[0]);
			
			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Janeiro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jan[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (jan[1] < 0);
		
		//nivel da caixa
		jan[3] = jan[0] - jan[1];
	
	}//fim void janeiro

	void fevereiro() {

		do{
		
		// limpa a tela
		system("cls");
		
		//imprime a quantidade maxima do reservatório
		printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);
		
		//imprime o histórico do mês anterior
		printf("\n * mes * quant chuva *   consumo   *    nivel    *"                       );
		printf("\n *     *             *             *             *"                       );
				
		valores_janeiro();
		
		//imprime instrucões ao usuário
		printf("\n\n   Digite a quantidade de chuva caiu Fevereiro ");
		printf("\n   Nao pode haver numero negativo : ");
		scanf_s("%d", &fev[0]);// pega o valor digitado e adiciona no vetor
		while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

		// laço para não aceitar numero negativo
		} while (fev[0] < 0);
		
		do {
			// limpa a tela
			system("cls");
			
			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);
			
			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Fevereiro ");
			printf("\n   Nao pode haver numero negativo : %d ", fev[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Fevereiro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &fev[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (fev[1] < 0);
		
		//nivel da caixa
		fev[3] = (jan[3] + fev[0]) - fev[1];
	
	}//fim void fevereiro

	void marco() {
	
		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Marco ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &mar[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (mar[0] < 0);

		do {
			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Marco ");
			printf("\n   Nao pode haver numero negativo : %d ", mar[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Marco: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &mar[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (mar[1] < 0);

		//nivel da caixa
		mar[3] = (fev[3] + mar[0]) - mar[1];
	
	}//fim void marco()

	void abril() {

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Abril ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &abr[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (abr[0] < 0);

		do {
			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Abril ");
			printf("\n   Nao pode haver numero negativo : %d ", abr[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Abril: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &abr[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (abr[1] < 0);

		//nivel da caixa
		abr[3] = (mar[3] + abr[0]) - abr[1];

	}//fim void abril()

	void maio() {

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Maio ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &mai[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (mai[0] < 0);

		do {
			
			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Maio ");
			printf("\n   Nao pode haver numero negativo : %d ", mai[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Maio: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &mai[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (mai[1] < 0);

		//nivel da caixa
		mai[3] = (abr[3] + mai[0]) - mai[1];
	
	}//fim void maio()

	void junho() {

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Junho ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jun[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (jun[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Junho ");
			printf("\n   Nao pode haver numero negativo : %d ", jun[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Junho: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jun[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (jun[1] < 0);

		//nivel da caixa
		jun[3] = (mai[3] + jun[0]) - jun[1];
	
	}//fim void junho()

	void julho() {
		
		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Julho ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jul[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (jul[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Julho ");
			printf("\n   Nao pode haver numero negativo : %d ", jul[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Julho: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &jul[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (jul[1] < 0);

		//nivel da caixa
		jul[3] = (jun[3] + jul[0]) - jul[1];
	
	}//fim void julho()

	void agosto() {
		
		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Agosto ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &ago[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (ago[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Agosto ");
			printf("\n   Nao pode haver numero negativo : %d ", ago[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Agosto: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &ago[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (ago[1] < 0);

		ago[3] = (jul[3] + ago[0]) - ago[1];
	
	}//fim void agosto()

	void setembro() {
		
		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Setembro ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &set[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (set[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Setembro ");
			printf("\n   Nao pode haver numero negativo : %d ", set[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Setembro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &set[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (set[1] < 0);

		//nivel da caixa
		set[3] = (ago[3] + set[0]) - set[1];
	
	}//fim void setembro()

	void outubro() {
		
		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Outubro ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &out[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (out[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Outubro ");
			printf("\n   Nao pode haver numero negativo : %d ", out[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Outubro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &out[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (out[1] < 0);

		//nivel da caixa
		out[3] = (set[3] + out[0]) - out[1];
	
	}//fim void outobro()

	void novembro() {

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();
			valores_outubro();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Novembro ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &nov[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.
			// laço para não aceitar numero negativo
		} while (nov[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();
			valores_outubro();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Novembro ");
			printf("\n   Nao pode haver numero negativo : %d ", nov[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Novembro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &nov[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (nov[1] < 0);

		//nivel da caixa
		nov[3] = (out[3] + nov[0]) - nov[1];

	}//fim void novembro()

	void dezembro() {

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();
			valores_outubro();
			valores_novembro();

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Dezembro ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &dez[0]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (dez[0] < 0);

		do {

			// limpa a tela
			system("cls");

			//imprime a quantidade maxima do reservatório
			printf("\n\n Quantidade maxima do reservatorio: %d mm\n\n", quantidadeMaxima);

			//imprime o histórico do mês anterior
			printf("\n * mes * quant chuva *   consumo   *    nivel    *");
			printf("\n *     *             *             *             *");

			valores_janeiro();
			valores_fevereiro();
			valores_marco();
			valores_abril();
			valores_maio();
			valores_junho();
			valores_julho();
			valores_agosto();
			valores_setembro();
			valores_outubro();
			valores_novembro();

			//imprime informações ao usuário
			printf("\n\n   Digite a quantidade de chuva caiu Dezembro ");
			printf("\n   Nao pode haver numero negativo : %d ", dez[0]);

			//imprime instrucões ao usuário
			printf("\n\n   Digite a quantidade de agua foi consumida em Dezembro: ");
			printf("\n   Nao pode haver numero negativo : ");
			scanf_s("%d", &dez[1]);// pega o valor digitado e adiciona no vetor
			while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer de techado.

			// laço para não aceitar numero negativo
		} while (dez[1] < 0);

		//nivel da caixa
		dez[3] = (nov[3] + dez[0]) - dez[1];
	
	}//fim void dezembro()

	void valores_janeiro() {

		printf("\n * jan ");

		if (jan[0] >= 10) {

			printf("*   %d mm     ", jan[0]);
		}else {

			printf("*    %d mm     ", jan[0]);
		}

		if (jan[1] >= 10) {

			printf("*   %d mm     ", jan[1]);
		}else {

			printf("*    %d mm     ", jan[1]);
		}

		if (jan[3] >= quantidadeMaxima) {

			jan[3] = quantidadeMaxima;
			printf("*    %d mm    *", jan[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (jan[3] <= 0) {

				jan[3] = 0;

				printf("*     %d mm    *", jan[3]);
				printf("  atencao reservatorio vazio!!!");
			
		}else {

			if (jan[3] >= 10) {

				printf("*    %d mm    *", jan[3]);
			}
			else {

				printf("*     %d mm    *", jan[3]);
			}
		}
	}

	void valores_fevereiro() {
		
		printf("\n * fev ");

		if (fev[0] >= 10) {

			printf("*   %d mm     ", fev[0]);
		}else {

			printf("*    %d mm     ", fev[0]);
		}

		if (fev[1] >= 10) {

			printf("*   %d mm     ", fev[1]);
		}else {

			printf("*    %d mm     ", fev[1]);
		}

		if (fev[3] >= quantidadeMaxima) {

			fev[3] = quantidadeMaxima;
			
			printf("*    %d mm    *", fev[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (fev[3] <= 0) {

				fev[3] = 0;

				printf("*     %d mm    *", fev[3]);
				printf("  atencao reservatorio vazio!!!");
		} else {

			if (fev[3] >= 10) {

				printf("*    %d mm    *", fev[3]);
			}
			else {

				printf("*     %d mm    *", fev[3]);
			}
		}
	}

	void valores_marco() {
		
		printf("\n * mar ");

		if (mar[0] >= 10) {

			printf("*   %d mm     ", mar[0]);
		}else {

			printf("*    %d mm     ", mar[0]);
		}

		if (mar[1] >= 10) {

			printf("*   %d mm     ", mar[1]);
		}else {

			printf("*    %d mm     ", mar[1]);
		}

		if (mar[3] >= quantidadeMaxima) {

			mar[3] = quantidadeMaxima;

			printf("*    %d mm    *", mar[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (mar[3] <= 0) {

				mar[3] = 0;

				printf("*     %d mm    *", mar[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (mar[3] >= 10) {

				printf("*    %d mm    *", mar[3]);
			}
			else {

				printf("*     %d mm    *", mar[3]);
			}
		}
	}
	
	void valores_abril() {
		
		printf("\n * abr ");

		if (abr[0] >= 10) {

			printf("*   %d mm     ", abr[0]);
		}else {

			printf("*    %d mm     ", abr[0]);
		}

		if (abr[1] >= 10) {

			printf("*   %d mm     ", abr[1]);
		}else {

			printf("*    %d mm     ", abr[1]);
		}

		if (abr[3] >= quantidadeMaxima) {

			abr[3] = quantidadeMaxima;

			printf("*    %d mm    *", abr[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (abr[3] <= 0) {

				abr[3] = 0;

				printf("*     %d mm    *", abr[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {
			if (abr[3] >= 10) {

				printf("*    %d mm    *", abr[3]);
			}
			else {

				printf("*     %d mm    *", abr[3]);

			}
		}
	}

	void valores_maio() {
		
		printf("\n * mai ");

		if (mai[0] >= 10) {

			printf("*   %d mm     ", mai[0]);
		}else {

			printf("*    %d mm     ", mai[0]);
		}

		if (mai[1] >= 10) {

			printf("*   %d mm     ", mai[1]);
		}else {

			printf("*    %d mm     ", mai[1]);
		}

		if (mai[3] >= quantidadeMaxima) {

			mai[3] = quantidadeMaxima;

			printf("*    %d mm    *", mai[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (mai[3] <= 0) {

				mai[3] = 0;

				printf("*     %d mm    *", mai[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (mai[3] >= 10) {

				printf("*    %d mm    *", mai[3]);
			}
			else {

				printf("*     %d mm    *", mai[3]);
			}
		}
	}

	void valores_junho() {
		
		printf("\n * jun ");

		if (jun[0] >= 10) {

			printf("*   %d mm     ", jun[0]);
		}else {

			printf("*    %d mm     ", jun[0]);
		}

		if (jun[1] >= 10) {

			printf("*   %d mm     ", jun[1]);
		}else {

			printf("*    %d mm     ", jun[1]);
		}

		if (jun[3] >= quantidadeMaxima) {

			jun[3] = quantidadeMaxima;

			printf("*    %d mm    *", jun[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (jun[3] <= 0) {

				jun[3] = 0;

				printf("*     %d mm    *", jun[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {
			
			if (jun[3] >= 10) {

				printf("*    %d mm    *", jun[3]);
			}
			else {

				printf("*     %d mm    *", jun[3]);
			}
		}
	}

	void valores_julho() {
		
		printf("\n * jul ");

		if (jul[0] >= 10) {

			printf("*   %d mm     ", jul[0]);
		}else {

			printf("*    %d mm     ", jul[0]);
		}

		if (jul[1] >= 10) {

			printf("*   %d mm     ", jul[1]);
		}else {

			printf("*    %d mm     ", jul[1]);
		}

		if (jul[3] >= quantidadeMaxima) {

			jul[3] = quantidadeMaxima;

			printf("*    %d mm    *", jul[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (jul[3] <= 0) {

				jul[3] = 0;

				printf("*     %d mm    *", jul[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {
	
			if (jul[3] >= 10) {

				printf("*    %d mm    *", jul[3]);
			}
			else {

				printf("*     %d mm    *", jul[3]);
			}
		}
	}

	void valores_agosto(){
		
		printf("\n * ago ");

		if (ago[0] >= 10) {

			printf("*   %d mm     ", ago[0]);
		}else {

			printf("*    %d mm     ", ago[0]);
		}

		if (ago[1] >= 10) {

			printf("*   %d mm     ", ago[1]);
		}else {

			printf("*    %d mm     ", ago[1]);
		}

		if (ago[3] >= quantidadeMaxima) {

			ago[3] = quantidadeMaxima;

			printf("*    %d mm    *", ago[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (ago[3] <= 0) {

				ago[3] = 0;

				printf("*     %d mm    *", ago[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (ago[3] >= 10) {

				printf("*    %d mm    *", ago[3]);
			}
			else {

				printf("*     %d mm    *", ago[3]);
			}
		}
	}

	void valores_setembro() {
	
		printf("\n * set ");

		if (set[0] >= 10) {

			printf("*   %d mm     ", set[0]);
		}else {

			printf("*    %d mm     ", set[0]);
		}

		if (set[1] >= 10) {

			printf("*   %d mm     ", set[1]);
		}else {

			printf("*    %d mm     ", set[1]);
		}

		if (set[3] >= quantidadeMaxima) {

			set[3] = quantidadeMaxima;

			printf("*    %d mm    *", set[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (set[3] <= 0) {

				set[3] = 0;

				printf("*     %d mm    *", set[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (set[3] >= 10) {

				printf("*    %d mm    *", set[3]);
			}
			else {

				printf("*     %d mm    *", set[3]);
			}
		}
	}

	void valores_outubro() {
		
		printf("\n * out ");

		if (out[0] >= 10) {

			printf("*   %d mm     ", out[0]);
		}else {

			printf("*    %d mm     ", out[0]);
		}

		if (out[1] >= 10) {

			printf("*   %d mm     ", out[1]);
		}else {

			printf("*    %d mm     ", out[1]);
		}

		if (out[3] >= quantidadeMaxima) {

			out[3] = quantidadeMaxima;

			printf("*    %d mm    *", out[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (out[3] <= 0) {

				out[3] = 0;

				printf("*     %d mm    *", out[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (out[3] >= 10) {

				printf("*    %d mm    *", out[3]);
			}
			else {

				printf("*     %d mm    *", out[3]);
			}
		}
	}

	void valores_novembro() {
		
		printf("\n * nov ");

		if (nov[0] >= 10) {

			printf("*   %d mm     ", nov[0]);
		}else {

			printf("*    %d mm     ", nov[0]);
		}

		if (nov[1] >= 10) {

			printf("*   %d mm     ", nov[1]);
		}else {

			printf("*    %d mm     ", nov[1]);
		}

		if (nov[3] >= quantidadeMaxima) {

			nov[3] = quantidadeMaxima;

			printf("*    %d mm    *", nov[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (nov[3] <= 0) {

				nov[3] = 0;

				printf("*     %d mm    *", nov[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (nov[3] >= 10) {

				printf("*    %d mm    *", nov[3]);
			}
			else {

				printf("*     %d mm    *", nov[3]);
			}
		}
	}

	void valores_dezembro() {
		
		printf("\n * dez ");

		if (dez[0] >= 10) {

			printf("*   %d mm     ", dez[0]);
		}else {

			printf("*    %d mm     ", dez[0]);
		}

		if (dez[1] >= 10) {

			printf("*   %d mm     ", dez[1]);

		}else {

			printf("*    %d mm     ", dez[1]);
		}

		if (dez[3] >= quantidadeMaxima) {

			dez[3] = quantidadeMaxima;

			printf("*    %d mm    *", dez[3]);
			printf("  atencao reservatorio cheio!!!");

		}else if (dez[3] <= 0) {

				dez[3] = 0;

				printf("*     %d mm    *", dez[3]);
				printf("  atencao reservatorio vazio!!!");
		}else {

			if (dez[3] >= 10) {

				printf("*    %d mm    *", dez[3]);
			}
			else {

				printf("*     %d mm    *", dez[3]);
			}
		}
	}