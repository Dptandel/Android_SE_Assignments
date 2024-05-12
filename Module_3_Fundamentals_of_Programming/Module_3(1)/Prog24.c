// Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main () {
    char employee_1, employee_2, employee_3, employee_4, employee_5;
    int salary_1, salary_2, salary_3, salary_4, salary_5, total_salary;
    float avg_salary;
    
    printf ("Enter Employee Names: ");
    scanf ("%c %c %c %c %c", &employee_1, &employee_2, &employee_3, &employee_4, &employee_5);
    
    printf ("Enter Salaries of Employees: ");
    scanf ("%d %d %d %d %d", &salary_1, &salary_2, &salary_3, &salary_4, &salary_5);

    //Total salary
    total_salary = salary_1 + salary_2 + salary_3 + salary_4 + salary_5;
    printf ("Total Salary: %d", total_salary);

    //Average salary
    avg_salary = total_salary / 5;
    printf ("Average Salary: %f", avg_salary);


    return 0;
}