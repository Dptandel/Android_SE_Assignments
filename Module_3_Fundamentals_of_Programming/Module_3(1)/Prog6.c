/* Find area of Triangle Formula : A = 1/2 × b × h */

#include<stdio.h>

int main() {
    int base, height;
    float area;

    printf("Enter base and height of triangle: ");
    scanf("%d %d", &base, &height);

    area = 0.5 * base * height; 

    printf("The area of the triangle is %f", area);

    return 0;
}