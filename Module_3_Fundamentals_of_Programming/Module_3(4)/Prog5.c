// WAP to take two Array input from user and sort them in 
// ascending or descending order as per user’s choice.

#include <stdio.h>

int main () {
    int arr1[5], arr2[5], temp;
    int choice;

    printf("Enter array 1 elements: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter array 2 elements: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\n* * * Enter choice * * *");
    printf("\n1 for Ascending or 2 for Descending: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (arr1[i] < arr1[j]) {
                    temp = arr1[j];
                    arr1[j] = arr1[i];
                    arr1[i] = temp;
                    }
                }
            }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (arr2[i] < arr2[j]) {
                    temp = arr2[j];
                    arr2[j] = arr2[i];
                    arr2[i] = temp;
                    }
                }
            } 

            printf("\nSorted array's (Ascending): ");
            printf("\nArray 1: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", arr1[i]);
            }
            
            printf("\nArray 2: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", arr2[i]);
            }
        break;

        case 2:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (arr1[i] > arr1[j]) {
                    temp = arr1[j];
                    arr1[j] = arr1[i];
                    arr1[i] = temp;
                    }
                }
            }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (arr2[i] > arr2[j]) {
                    temp = arr2[j];
                    arr2[j] = arr2[i];
                    arr2[i] = temp;
                    }
                }
            } 

            printf("\nSorted array's (Descending): ");
            printf("\nArray 1: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", arr1[i]);
            }
            
            printf("\nArray 2: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", arr2[i]);
            }
        break;

        default:
            printf("\nInvalid choice");
    }

    return 0;
}