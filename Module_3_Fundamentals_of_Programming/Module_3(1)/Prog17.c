// Calculate person’s insurance premium based on salary.

#include<stdio.h>

int main() {
    int salary;  
    float percentage, premium;

    printf("Enter salary of person: ");
    scanf("%d", &salary);

    printf("Enter Insurance percentage of person: ");
    scanf("%f", &percentage);

    //Insurance premium
    premium = salary * percentage / 100; 

    printf("The premium of a person is %f", premium);

    return 0;
}