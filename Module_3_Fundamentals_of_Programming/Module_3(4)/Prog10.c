// WAP to show difference between Structure and Union. (program 18 is same as program 10)

/*
Structures and unions in C are both used to define custom data types, but they have some key differences:

Memory Allocation:
Structure: Each member of a structure is allocated its own separate memory space. 
The total memory allocated for a structure is the sum of the memory required by each member.
Union: All members of a union share the same memory location. The size of a union is determined by the size of its largest member.

Member Accessibility:
Structure: Each member of a structure can be accessed independently.
Union: Only one member of a union can be active (contain valid data) at any given time. Accessing a member of a union accesses 
the memory location of the currently active member.

Usage:
Structure: Typically used when different pieces of data need to be stored together, each with its own identity and memory space.
For example, storing information about a student (name, age, GPA).
Union: Used when different types of data need to be stored in the same memory location, but only one type of data is active at any given time. 
For example, representing a shape that can be either a rectangle or a circle.

Memory Efficiency:
Structure: Less memory efficient compared to unions when storing multiple data types, as each member is allocated its own memory space.
Union: More memory efficient compared to structures when storing multiple data types, as all members share the same memory location. 
However, only one member can be active at a time.

*/

#include <stdio.h>  
#include <string.h>  

struct employee1 {
    int id;
    char name[50];
    float salary;  
} e1;

union employee2 {
    int eid;
    char ename[50], esname[50];
    float esalary;
} e2;   

int main () {
    //for structure
    printf("Structure of employee\n");

    printf ("Enter employee id: ");
    scanf ("%d", &e1.id);
    
    printf ("Enter employee name: ");
    scanf ("%s", &e1.name);
    
    printf("Enter salary: ");
    scanf ("%f", &e1.salary);
    
    printf("\nEmployee ID.: %d", e1.id);
    printf("\nName: %s", e1.name);
    printf("\nSalary: %f", e1.salary);

    // for union
    printf("\n\nUnion of employee\n");
    
    printf ("Enter employee id: ");
    scanf ("%d", &e2.eid);
    
    printf ("Enter employee name: ");
    scanf ("%s", &e2.ename);

    printf ("Enter employee surname: ");
    scanf ("%s", &e2.esname);

    printf("Enter salary: ");
    scanf ("%f", &e2.esalary);

    printf("\nEmployee ID.: %d", e2.eid);
    printf("\nName: %s", e2.ename);
    printf("\nName: %s", e2.esname);
    printf("\nSalary: %f", e2.esalary);

    return 0;
}