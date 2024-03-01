#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE]; // Vetor que representa a pilha
int top = -1; // Índice do topo da pilha

// Função para empilhar (push) um número
void push(int value) {
    if (top == MAX_SIZE - 1) { // Verifica se a pilha está cheia
        printf("Erro: Pilha cheia, impossível empilhar.\n");
        return;
    }
    stack[++top] = value; // Incrementa o topo e adiciona o valor à pilha
}

// Função para desempilhar (pop) um número
int pop() {
    if (top == -1) { // Verifica se a pilha está vazia
        printf("Erro: Pilha vazia, impossível desempilhar.\n");
        return -1;
    }
    return stack[top--]; // Retorna o valor do topo e decrementa o topo
}

// Função para exibir a pilha
void displayStack() {
    if (top == -1) { // Verifica se a pilha está vazia
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

    printf("Bem-vindo à pilha interativa!\n");

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Empilhar (push)\n");
        printf("2. Desempilhar (pop)\n");
        printf("3. Exibir pilha\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf(" %c", &choice); // Lê a opção do usuário

        switch (choice) {
            case '1':
                printf("Digite um número para empilhar: ");
                scanf("%d", &value); // Lê o valor a ser empilhado
                push(value); // Chama a função push para empilhar o valor
                break;
            case '2':
                value = pop(); // Chama a função pop para desempilhar
                if (value != -1)
                    printf("Elemento retirado: %d\n", value); // Imprime o valor desempilhado
                break;
            case '3':
                displayStack(); // Chama a função para exibir a pilha
                break;
            case '4':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha novamente.\n");
        }

    } while (choice != '4'); // Continua até que o usuário escolha sair

    return 0;
}

