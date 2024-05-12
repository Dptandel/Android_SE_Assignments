// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>
#include <math.h>

int main()
{
	int num;
    int a, b, c;

	printf("Enter The Number:");
	scanf("%d", &num);

    // First Three Powers (N^1, N^2, N^3) Without Using Power Function
	printf("The First three powers of %d is %d, %d, %d",num, num, num * num, num * num * num);

    // First Three Powers (N^1, N^2, N^3) Using the Power Function
    a = pow(num, 1);
    b = pow(num, 2);
    c = pow(num, 3);

    printf("\n The First three powers of %d is %d, %d, %d",num, a, b, c);
	return 0;
}