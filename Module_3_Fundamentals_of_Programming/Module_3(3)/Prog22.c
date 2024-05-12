// C Program to Reverse a Number Using FOR Loop.

#include<stdio.h>

int main(){

    int number, reversed = 0, remainder, temp; 

    printf("Enter the number to reverse: ");
    scanf("%d",&number);

    temp = number;

    for( ;number > 0; ){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Reverse number of %d is %d", temp, reversed);

    return 0;
}