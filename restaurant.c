#include <stdio.h>
#include "restaurant_helpers.c"

int main(void) {

    printf("Enter name: ");
    scanf("%s", Bill.username);

    int choice;
    do {
        displayChoice();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int count;
        switch (choice) {
        case Pongal:
            printf("Enter Count: ");
            scanf("%d", &count);
            Menu[Pongal - 1].count += count;
            Bill.amount += Menu[Pongal].price * count;
            break;

        case Dosa:
            printf("Enter Count: ");
            scanf("%d", &count);
            Menu[Dosa - 1].count += count;
            Bill.amount += Menu[Dosa].price * count;
            break;

        case Vada:
            printf("Enter Count: ");
            scanf("%d", &count);
            Menu[Dosa - 1].count += count;
            Bill.amount += Menu[Dosa].price * count;
            break;

        case Exit:
            printf("End\n\n");
            break;

        default:
            printf(" -- Invalid --\n");
            break;
        }
    } while (choice != Exit);

    displayBill();
    return 0;
}