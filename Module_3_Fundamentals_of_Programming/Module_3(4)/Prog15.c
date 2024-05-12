// Perform 2D matrix array

#include <stdio.h>
int main() {
    int array[4][4] = { { 11, 12, 13, 14 }, { 15, 16, 17, 18 }, { 19, 20, 21, 22 }, { 23, 24, 25, 26 } };

    int matrix[4][4];

    printf("2D matrix using array: ");
    for (int row = 0; row < 4; row++) {
        printf("\n");
        for (int col = 0; col < 4; col++) {
            matrix[row][col] = array[row][col];
            printf("%d\t", matrix[row][col]);
        }
    }

    return 0;
}