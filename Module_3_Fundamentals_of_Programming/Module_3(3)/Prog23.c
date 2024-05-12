// Series Program:
// 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main() {
    int n, sum, i;
    
    printf("Enter value of n : ");
    scanf("%d", &n);

    sum = 1;
    printf("%d", sum);
    
    for(i = 2; i <= n; i++) {
        printf(" + %d", i);
        sum += i;
    }
    
    printf(" = %d",sum);
    
    return 0;
}