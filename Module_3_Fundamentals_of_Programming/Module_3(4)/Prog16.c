// Store 5 numbers in array and sort it in ascending order.

#include <stdio.h>

int main() {    
    int arr[] = {15, 12, 18, 17, 11};     
    int temp = 0;

    int length = sizeof(arr)/sizeof(arr[0]);    

    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }

    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
            if(arr[i] > arr[j]) {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;    
            }   
        }     
    }
    
    printf("\n");    

    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }

    return 0;    
}  