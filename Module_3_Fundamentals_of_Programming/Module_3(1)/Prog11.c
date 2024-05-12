// Find perimeter of square formula : p = 4 * a

#include<stdio.h>
int main() {
    int side;
    int perimeter;

    printf("Enter side of square: ");
    scanf("%d", &side);

    //perimeter of square
    perimeter = 4 * side; 

    printf("The perimeter of the square is %d", perimeter);
    return 0;
}