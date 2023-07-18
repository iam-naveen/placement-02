#include <stdio.h>

int main() {

    int row, col;

    printf("Enter No.of Columns: ");
    scanf("%d", &row);
    printf("Enter No.of Rows: ");
    scanf("%d", &col);

    int mat[row][col];

    // {
    //     {1,1,0} -> sum: 2
    //     {0,0,0} -> sum: 0
    //     {1,1,1} -> sum: 3
    // }

    int max = 0, maxIndex = 0;

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            printf("Enter row-%d col-%d -> ", row, col);
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
        if (sum > max) maxIndex = i + 1;
    }

    printf("Row %d has the maximum full spaces", maxIndex);

}