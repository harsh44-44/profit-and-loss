#include <stdio.h>

int main() {
    int choice;
    char item[50];
    float PQ, PR, SQ, SR;
    float CP_sold, SP, P, L;

    // Menu for items
    printf("Choose item:\n");
    printf("1. Milk\n");
    printf("2. Bread\n");
    printf("3. Eggs\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // To consume newline

    // Input item name
    switch(choice) {
        case 1:
            printf("Enter Item Name: Milk\n");
            strcpy(item, "Milk");
            printf("Quantity in liters: ");
            scanf("%f", &PQ);
            break;
        case 2:
            printf("Enter Item Name: Bread\n");
            strcpy(item, "Bread");
            printf("Quantity in kg: ");
            scanf("%f", &PQ);
            break;
        case 3:
            printf("Enter Item Name: Eggs\n");
            strcpy(item, "Eggs");
            printf("Quantity in pieces: ");
            scanf("%f", &PQ);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
