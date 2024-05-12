// Accept 5 numbers from user and perform sum of array.

#include <stdio.h>

int main() {
    int arr[5];
    int sum_of_array = 0;

    int length = sizeof(arr)/sizeof(arr[0]);    

    printf("Enter 5 numbers to store in array: ");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array: ");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }

    for (int i = 0; i < length; i++) {     
        sum_of_array += arr[i];     
    }   

    printf("\nSum of array elements: %d", sum_of_array);

    return 0;    
}