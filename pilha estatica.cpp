#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE]; // Vetor que representa a pilha
int top = -1; // �ndice do topo da pilha

// Fun��o para empilhar (push) um n�mero
void push(int value) {
    if (top == MAX_SIZE - 1) { // Verifica se a pilha est� cheia
        printf("Erro: Pilha cheia, imposs�vel empilhar.\n");
        return;
    }
    stack[++top] = value; // Incrementa o topo e adiciona o valor � pilha
}

// Fun��o para desempilhar (pop) um n�mero
int pop() {
    if (top == -1) { // Verifica se a pilha est� vazia
        printf("Erro: Pilha vazia, imposs�vel desempilhar.\n");
        return -1;
    }
    return stack[top--]; // Retorna o valor do topo e decrementa o topo
}

// Fun��o para exibir a pilha
void displayStack() {
    if (top == -1) { // Verifica se a pilha est� vazia
        printf("Pilha vazia.\n");
        return;
    }
    printf("Elementos na pilha: ");
    for (int i = 0; i <= top; ++i) { // Percorre a pilha do fundo ao topo
        printf("%d ", stack[i]); // Imprime cada elemento da pilha
    }
    printf("\n");
}

int main() {
    char choice;
    int value;

    printf("Bem-vindo � pilha interativa!\n");

    do {
        printf("\nEscolha uma op��o:\n");
        printf("1. Empilhar (push)\n");
        printf("2. Desempilhar (pop)\n");
        printf("3. Exibir pilha\n");
        printf("4. Sair\n");
        printf("Op��o: ");
        scanf(" %c", &choice); // L� a op��o do usu�rio

        switch (choice) {
            case '1':
                printf("Digite um n�mero para empilhar: ");
                scanf("%d", &value); // L� o valor a ser empilhado
                push(value); // Chama a fun��o push para empilhar o valor
                break;
            case '2':
                value = pop(); // Chama a fun��o pop para desempilhar
                if (value != -1)
                    printf("Elemento retirado: %d\n", value); // Imprime o valor desempilhado
                break;
            case '3':
                displayStack(); // Chama a fun��o para exibir a pilha
                break;
            case '4':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Op��o inv�lida. Por favor, escolha novamente.\n");
        }

    } while (choice != '4'); // Continua at� que o usu�rio escolha sair

    return 0;
}

