// Write a program to find out the max number from given array using function.

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
        max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter elements: \n");

    for (int i = 0; i < size; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);
    printf("The maximum number in the array is %d\n", max);
    return 0;
}