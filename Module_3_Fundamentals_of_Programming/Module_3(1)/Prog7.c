/* Find area of Rectangle Formula : A = wl */

#include<stdio.h>

int main() {
    int length, width;
    float area;

    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);

    area = length * width; 

    printf("The area of the rectangle is %f", area);
    
    return 0;
}