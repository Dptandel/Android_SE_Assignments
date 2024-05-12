// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.

#include <stdio.h>
int main() {
    int arr1[3][3] = { { 11, 45, 35 }, { 46, 65, 14 }, { 73, 42, 13 } };
    int arr2[3][3] = { { 91, 12, 63 }, { 14, 65, 86}, { 47, 28, 59 } };
    
    int add[3][3], sub[3][3], mul[3][3];

    // Addition of two matrix:
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            add[row][col] = 0;
            add[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    printf("Addition of two matrix:");
    for (int row = 0; row < 3; row++) {
        printf("\n");
        for (int col = 0; col < 3; col++) {
            printf("%d\t", add[row][col]);
        }
    }

    // Subtraction of two matrix:
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            sub[row][col] = 0;
            sub[row][col] = arr1[row][col] - arr2[row][col];
        }
    }

    printf("\nSubtraction of two matrix:");
    for (int row = 0; row < 3; row++) {
        printf("\n");
        for (int col = 0; col < 3; col++) {
            printf("%d\t", sub[row][col]);
        }
    }

    // Multiplication of two matrix:
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            mul[row][col] = 0;
            for(int i=0; i<3; i++) {
            mul[row][col] += arr1[row][i] * arr2[i][col];
            }
        }
    }

    printf("\nMultiplication of two matrix:");
    for (int row = 0; row < 3; row++) {
        printf("\n");
        for (int col = 0; col < 3; col++) {
            printf("%d\t", mul[row][col]);
        }
    }

    return 0;
}