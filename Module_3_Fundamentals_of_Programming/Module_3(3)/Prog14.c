// Accept 5 numbers from user and find those numbers factorials.

#include<stdio.h>

int main(){

    int num, i, j, factorial;
    factorial = j = 1;

    printf("Enter 5 numbers: ");  

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        
        while (j <= num) {
        factorial = factorial * j;
        j++;
    }
    
    printf("\nFactorial of %d is: %d", num, factorial);
    }

    return 0;

}