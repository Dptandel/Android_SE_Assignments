// Calculate person’s Annual salary

#include<stdio.h>
int main() {
    int salary;
    int annual_salary;

    printf("Enter salary of person: ");
    scanf("%d", &salary);

    //annual salary
    annual_salary = salary * 12; 

    printf("The annual salary of a person is %d", annual_salary);
    return 0;
}