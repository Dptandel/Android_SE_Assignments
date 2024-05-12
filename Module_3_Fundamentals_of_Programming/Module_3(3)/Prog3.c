// WAP to take 10 no. Input from user find out below values
//      a. How many Even numbers are there
//      b. How many odd numbers are there
//      c. Sum of even numbers
//      d. Sum of odd numbers

#include <stdio.h>

int main() {
    int i, num, even_count = 0, odd_count = 0, sum_even = 0, sum_odd = 0;

    printf("Enter 10 numbers: ");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            even_count++;
            sum_even += num; 
        } else {
            odd_count++;
            sum_odd += num;
        }
    }
    
    printf("Total Even Numbers: %d \n", even_count);
    printf("Total Odd Numbers: %d \n", odd_count);

    printf("Sum of Even Numbers: %d \n", sum_even);
    printf("Sum of Odd Numbers: %d \n", sum_odd);

    return 0;
}