// Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
int main() {
    int a, b, c;
    int circumference;

    printf("Enter side values of triangle (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    //area and circumference of triangle
    circumference = a + b + c; 

    printf("The circumference of the rectangle is %d", circumference);
    return 0;
}