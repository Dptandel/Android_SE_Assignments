// Enter 5 numbers from user and calculate number of even and odd using of while loop.

#include <stdio.h>

int main() {
    int i = 0, number, odd_count = 0, even_count = 0;

    printf("Enter 5 numbers: ");
    
    while (i < 5) {
        scanf("%d", &number);

        i++;

        if(number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total number of even is %d.", even_count);
    printf("\nTotal number of odd is %d.", odd_count);

    return 0;
}
