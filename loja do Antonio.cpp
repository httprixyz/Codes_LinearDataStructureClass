#include <stdio.h>
#include <string.h>

#define MAX_CARROS 100

struct Carro {
    int ano;
    char modelo[50];
    char marca[50];
    char placa[10];
    char chassi[17];
    float valor;
};

int main() {
    struct Carro carros[MAX_CARROS];
    int quantidade_carros = 0;

    printf("Bem-vindo ao sistema de controle de estoque de carros do Antonio!\n");

    while (quantidade_carros < MAX_CARROS) {
        printf("\nDigite os dados do carro #%d:\n", quantidade_carros + 1);
        printf("Ano: ");
        scanf("%d", &carros[quantidade_carros].ano);

        if (carros[quantidade_carros].ano == 0) {
            break;
        }

        printf("Modelo: ");
        scanf(" %[^\n]s", carros[quantidade_carros].modelo);

        printf("Marca: ");
        scanf(" %[^\n]s", carros[quantidade_carros].marca);

        printf("Placa: ");
        scanf(" %[^\n]s", carros[quantidade_carros].placa);

        printf("Chassi: ");
        scanf(" %[^\n]s", carros[quantidade_carros].chassi);

        printf("Valor: ");
        scanf("%f", &carros[quantidade_carros].valor);

        quantidade_carros++;
    }

    printf("\nCarros registrados:\n");
    for (int i = 0; i < quantidade_carros; i++) {
        printf("Carro #%d\n", i + 1);
        printf("Ano: %d\n", carros[i].ano);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Marca: %s\n", carros[i].marca);
        printf("Placa: %s\n", carros[i].placa);
        printf("Chassi: %s\n", carros[i].chassi);
        printf("Valor: R$ %.2f\n", carros[i].valor);
        printf("\n");
    }

    return 0;
}

