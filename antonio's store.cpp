#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

struct Car {
    int year;
    char model[50];
    char brand[50];
    char plate[10];
    char chassis[17];
    float price;
};

int main() {
    struct Car cars[MAX_CARS];
    int num_cars = 0;

    printf("Welcome to Antonio's car inventory control system!\n");

    while (num_cars < MAX_CARS) {
        printf("\nEnter the details of car #%d:\n", num_cars + 1);
        printf("Year (enter 0 to finish): ");
        scanf("%d", &cars[num_cars].year);

        if (cars[num_cars].year == 0) {
            break;
        }

        printf("Model: ");
        scanf(" %[^\n]s", cars[num_cars].model);

        printf("Brand: ");
        scanf(" %[^\n]s", cars[num_cars].brand);

        printf("License Plate: ");
        scanf(" %[^\n]s", cars[num_cars].plate);

        printf("Chassis Number: ");
        scanf(" %[^\n]s", cars[num_cars].chassis);

        printf("Price: ");
        scanf("%f", &cars[num_cars].price);

        num_cars++;
    }

    printf("\nRegistered Cars:\n");
    for (int i = 0; i < num_cars; i++) {
        printf("Car #%d\n", i + 1);
        printf("Year: %d\n", cars[i].year);
        printf("Model: %s\n", cars[i].model);
        printf("Brand: %s\n", cars[i].brand);
        printf("License Plate: %s\n", cars[i].plate);
        printf("Chassis Number: %s\n", cars[i].chassis);
        printf("Price: $%.2f\n", cars[i].price);
        printf("\n");
    }

    return 0;
}

