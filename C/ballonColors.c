#include <stdio.h>

int main() {
    int size;
    printf("Enter no.of Ballons: ");
    scanf("%d", &size);

    char ballon[size];
    char count[26];
    for (int i = 0; i < 26; i++) count[i] = 0;

    for (int i = 0; i < size; i++) {
        char color;
        printf("Enter ballon %d color: ", i + 1);
        scanf("\n%c", &color);
        ballon[i] = color;
        color -= (color <= 90 && color >= 65) ? 65 : 96;
        count[color]++;
    }
    for (int i = 0; i < size; i++) {
        char color = ballon[i];
        if (count[color - 97] % 2 == 1) {
            printf("%c", ballon[i]);
            return 0;
        }
    }
    printf("All are even");
    return 0;
}