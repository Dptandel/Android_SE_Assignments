// Find circumference of Rectangle formula : C = 2l + 2w

#include<stdio.h>
int main() {
    int length, width;
    float circumference;

    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);

    //area and circumference of circle
    circumference = 2 * length + 2 * width; 

    printf("The circumference of the rectangle is %f", circumference);
    return 0;
}