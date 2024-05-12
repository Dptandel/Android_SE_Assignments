// Series Program: 
// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main() {
    int n, sum, i;
    
    printf("Enter value of n : ");
    scanf("%d", &n);

    sum = 1;
    printf("(%d * %d)", sum, sum);
    
    for(i = 2; i <= n; i++) {
        printf(" + (%d * %d)", i, i);
        sum += i * i;
    }
    
    printf(" = %d",sum);
    
    return 0;
}