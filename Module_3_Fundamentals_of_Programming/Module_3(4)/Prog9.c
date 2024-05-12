/*
Write a program of structure employee that provides the following
information - print and display empno, empname, address and age

Write a program of structure for five employee that provides the following 
information - print and display empno, empname, address and age
*/

#include <stdio.h>
struct employee {
    int emp_no, emp_age;
    char emp_name[20], emp_address[50];
} s[5];

int main () {
    int i;
    printf("Enter details of employee's: \n");

    for (i = 0; i < 5; i++){
        s[i].emp_no = i +1;
        printf("\nEmployee no. %d information: \n", s[i].emp_no);
        printf("Employee name: ");
        scanf("%s", &s[i].emp_name);
        printf("Employee age: ");
        scanf("%s", &s[i].emp_age);
        printf("Employee address: ");
        scanf("%s", &s[i].emp_address);
    }
    
    printf("\nDisplaying Information:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee No.: %d", i + 1);
        printf("\nName: %s", s[i].emp_name);
        printf("\nAge: %d", s[i].emp_age);
        printf("\nAddress: %s", s[i].emp_address);
        printf("\n");
    }
    return 0;
}