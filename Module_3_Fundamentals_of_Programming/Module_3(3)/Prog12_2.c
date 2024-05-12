// Program of Armstrong Number in C Using For Loop & While Loop.
// 371 = 3 * 3 * 3 + 7 * 7 * 7 + 1 * 1 * 1 = 371

/* Using for loop */

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    for(originalNum = num; num != 0; num = num / 10) {
        remainder = num % 10;
        
        result = result + (remainder * remainder * remainder);
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.", originalNum);
    } else {
        printf("%d is not an Armstrong number.", originalNum);
    }
    
    return 0;
}