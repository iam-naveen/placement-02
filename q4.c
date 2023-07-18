#include <stdio.h>

int main() {

    int size;
    printf("Enter total hours: ");
    scanf("%d", &size);

    int entry[size], exit[size], res[size];

    for (int i = 0; i < size; i++) {
        printf("\n\tHour-%d\n", i + 1);
        printf("Entry: "); scanf("%d", &entry[i]);
        printf("Exit: "); scanf("%d", &exit[i]);
    }

    res[0] = entry[0] - exit[0];
    int max = res[0];

    for (int i = 1; i < 5; i++) {

        res[i] = res[i - 1] + entry[i] - exit[i];

        if (res[i] > max) max = res[i];
    }

    printf("\nNo.of Guests within %d hours is %d\n", size, max);

    return 0;
}