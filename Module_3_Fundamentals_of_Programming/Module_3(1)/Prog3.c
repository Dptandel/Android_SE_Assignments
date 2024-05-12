/* WAP to Find Area And Circumference of Circle */

#include<stdio.h>

int main() {
    int radius;
    float area, circumference;
    float pi = 3.14159265359;

    printf("Enter radius: ");
    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius; 

    printf("The area of the circle is %f", area);
    printf("\n The circumference of the circle is %f", circumference);
    return 0;
}