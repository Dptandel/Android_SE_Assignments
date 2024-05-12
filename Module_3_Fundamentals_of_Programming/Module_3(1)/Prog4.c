/* Find Area of Square formula : a = a2 */

#include<stdio.h>

int main() {
    int length;
    int area;

    printf("Enter length of square: ");
    scanf("%d", &length);

    area = length * length; 

    printf("The area of the square is %d", area);
    
    return 0;
}