// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

int main () {

    int angle_a, angle_b, angle_c, total_of_angles;

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &angle_a, &angle_b, &angle_c);

    total_of_angles = angle_a + angle_b + angle_c;

    (total_of_angles == 180) ? printf("The triangle is valid.") : printf("The triangle is not valid.");

    return 0;
} 
