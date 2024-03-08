#include <stdio.h>
#include <stdlib.h>
#define max 5

int dado[max];
int topo = 0;
int op;

void exibir(void) {
	printf("\n");
	for (int temp = topo - 1; temp >= 0; temp--) {
		printf("Na posicao %d temos %d\n", temp, dado[temp]);
	}
	printf("\n");
	system("PAUSE");
}

void inserir(void) {
	int valor;
	if (topo == max) {
		printf("\nPilha cheia!\n");
	} else {
		printf("\nDigite o valor a ser inserido: ");
		scanf("%d", &valor);
		dado[topo] = valor;
		topo++;
	}
	exibir();
}

void remover(void) {
	if (topo == 0) {
		printf("\nA pilha esta vazia\n");
	} else {
		printf("\nRetirado o valor %d da pilha\n", dado[topo - 1]);
		topo--;
	}
	exibir();
}

int menu(void) {
	printf("-- Programa Pilha em C-- \n\n");
	printf("	Para inserir digite 	1\n");
	printf("	Para remover digite 	2\n");
	printf("	Para exibir digite		3\n\n");
	printf("	Para sair				4\n");
	printf("	Para exibir o topo		5\n\n");
	scanf("%d", &op);
	switch (op) {
		case 1:
			inserir();
			break;
		case 2:
			remover();
			break;
		case 4:
			break;
	}
	return 0;
}

int main(void) {
	while (op != 4) {
		system("cls");
		menu();
	}
	return 0;
}

