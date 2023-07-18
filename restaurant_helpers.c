
#include <stdio.h>
#include <stdlib.h>


typedef struct Dish {
    char* name;
    float price;
    int count;
} Dish;


typedef struct Order {
    char username[20];
    int amount;
} Order;


Order Bill;

Dish Menu[] = {
    {"Pongal", 20.00, 0},
    {"Dosa", 10.00, 0},
    {"Vada", 5.00, 0},
    {"Exit", 0, 0}
};

int len = sizeof(Menu) / sizeof(Dish);

enum Dishes { Pongal = 1, Dosa, Vada, Exit };


void displayChoice() {
    for (int i = 0; i < len; i++) {
        printf("%d. %s\n", i + 1, Menu[i].name);
    }
}

void displayBill() {
    printf("Name\tCount\tPrice\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t%.2f\n", Menu[i].name, Menu[i].count, Menu[i].price);
    }
    printf("Total: %d\n", Bill.amount);
}

