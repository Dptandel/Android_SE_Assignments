/* Find Area of Cube formula : a = 6a2 */

#include<stdio.h>

int main() {
    int length;
    int area;

    printf("Enter length of cube: ");
    scanf("%d", &length);

    area = 6 * length * length;

    printf("The area of the cube is %d", area);

    return 0;
}