#include <stdio.h>

int main(void) {

    int rounds;

    printf("Enter no.of rounds");
    scanf("%d", &rounds);

    int tests[rounds][3];
    int average[3];

    // Getting Inputs
    printf("Enter values: ");
    for (int i = 0; i < rounds; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &tests[i][j]);
        }
    }
    // Calculate average
    for (int col = 0; col < 3; col++) {
        int sum = 0;
        for (int row = 0; row < rounds; row++) {
            sum += tests[row][col];
        }
        average[col] = sum / 3;
    }
    // Find Max
    int max = 0;
    for (int i = 0; i < 3; i++) {
        if (average[i] > max) max = average[i];
        if (max != 0 && max == average[i]) printf("%d ", i + 1);
    }
}