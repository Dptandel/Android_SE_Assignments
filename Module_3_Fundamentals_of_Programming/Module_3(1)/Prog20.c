// Accept monthly salary from the user and deduct 10% insurance premium, 
// 10% loan installment find out of remaining salary.

#include<stdio.h>

int main() {
    float salary, insurance_premium, loan_installment, remaining_salary;

    printf("Enter salary of person: ");
    scanf("%f", &salary);

    printf("Enter insurance premium paid by person: ");
    scanf("%f", &insurance_premium);

    printf("Enter loan installment paid by person: ");
    scanf("%f", &loan_installment);

    //remaining salary
    remaining_salary = salary - 0.1 * (insurance_premium + loan_installment); 

    printf("The remaining salary of a person is %f", remaining_salary);
    return 0;
}