#include <stdio.h>

/*
void menuOnibus(void) {
    printf("Escolher Onibus/n/n");
    printf("1. 101-010/n");
    printf("Digite o numero da sua escolha: ");
    
    int escolhaOnibus;
    scanf("%d", &escolhaOnibus);
  \
    switch(escolhaOnibus) {
    case 1:
		system("cls");
		printf("Onibus 101-010 escolhido./n");
		getchar();
		break;
	default:
		system("cls");
		printf("Opcao invalida! Escolha novamente.\n----------------------------------\n");
		menuOnibus();
		break;
  }
}
*/

void menuCompra(void) {
	printf("Comprar Passagem\n\n");
	printf("1. Passagem Inteira.\n");
	printf("2. Passagem para Idosos.\n");
	printf("3. Passagem para Estudantes.\n");
	printf("4. Voltar ao Menu Principal.\n\n");
	printf("Digite o numero da sua escolha: ");
	
	int escolhaCompra;
	scanf("%d", &escolhaCompra);

	switch (escolhaCompra) {
	case 1:
		system("cls");
		printf("Passagem Inteira.\n");
		getchar();
		break;
	case 2:
		system("cls");
		printf("Passagem para Idosos.\n");
		getchar();
		break;
	case 3:
		system("cls");
		printf("Passagem para Estudantes.\n");
		getchar();
		break;
	case 4:
		system("cls");
		break;
	default:
		system("cls");
		printf("Opcao invalida! Escolha novamente.\n----------------------------------\n");
		menuCompra();
		break;
	}
}

void menuCaixa(void) {
	printf("Gestao de Caixa.\n\n");
	printf("1. Compras Detalhadas.\n");
	printf("2. Saldo em Caixa.\n");
	printf("3. Voltar ao Menu Principal.\n\n");
	printf("Digite o numero da sua escolha: ");

	int escolhaCaixa;
	scanf("%d", &escolhaCaixa);

	switch (escolhaCaixa) {
	case 1:
		system("cls");
		printf("Compra Detalhada.\n");
		getchar();
		break;
	case 2:
		system("cls");
		printf("Saldo em Caixa.\n");
		getchar();
		break;
	case 3:
		system("cls");
		break;
	default:
		system("cls");
		printf("Opcao invalida! Escolha novamente.\n----------------------------------\n");
		menuCompra();
		break;
	}
}

void menuPrincipal(void) {
comeco:
	printf("Sistema de Venda de Passagens de Onibus\n\n");
	printf("1. Comprar Passagem.\n");
	printf("2. Gestao do Caixa.\n");
	printf("3. Sair.\n\n");
	printf("Digite o numero da sua escolha: ");

	int escolhaPrincipal;
	scanf("%d", &escolhaPrincipal);

	switch (escolhaPrincipal) {
	case 1:
		system("cls");
		menuCompra();
		goto comeco;
		break;
	case 2:
		system("cls");
		menuCaixa();
		goto comeco;
		break;
	case 3:
		break;
	default:
		system("cls");
		printf("Opcao invalida! Escolha novamente.\n----------------------------------\n");
		menuPrincipal();
		break;
	}
}

int main(int argc, char *argv[]) {
	system("cls");
	menuPrincipal();
	return 0;
}