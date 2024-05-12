// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main() {
    int width, length, height;
    int area;

    printf("Enter width, length, height of rectangular prism: ");
    scanf("%d %d %d", &width, &length, &height);

    //area of rectangular prism
    area = 2 * width * length + 2 * height * length + 2 * height * width; 

    printf("The area of the rectangular prism is %d", area);
    return 0;
}