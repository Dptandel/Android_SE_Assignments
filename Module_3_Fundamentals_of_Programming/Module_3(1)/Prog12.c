// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
int main() {
    int num_students;
    int num_apple;

    printf("Enter number of students: ");
    scanf("%d", &num_students);

    //How many apples are required to give 5 apples to each student
    num_apple = 5 * num_students; 

    printf("The required numbers of the apples are %d", num_apple);
    return 0;
}