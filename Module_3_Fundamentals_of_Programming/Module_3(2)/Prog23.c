// Accept month number and display month name.

#include <stdio.h>

int main () {
    int month;

    printf ("Enter the number of month : ");
    scanf ("%d", &month);

    switch (month) {
        case 1: 
            printf ("The %dst month of the year is January.", month); 
            break;

        case 2: 
            printf ("The %dnd month of the year is February.", month); 
            break;

        case 3: 
            printf ("The %drd month of the year is March.", month); 
            break;

        case 4: 
            printf ("The %dth month of the year is April.", month); 
            break;

        case 5: 
            printf ("The %dth month of the year is May.", month); 
            break;

        case 6: 
            printf ("The %dth month of the year is June.", month); 
            break;

        case 7: 
            printf ("The %dth month of the year is July.", month); 
            break;
        
        case 8: 
            printf ("The %dth month of the year is August.", month); 
            break;
        
        case 9: 
            printf ("The %dth month of the year is September.", month); 
            break;
    
        case 10: 
            printf ("The %dth month of the year is October.", month); 
            break;

        case 11: 
            printf ("The %dth month of the year is November.", month); 
            break;

        case 12: 
            printf ("The %dth month of the year is December.", month); 
            break;

        default:
            printf ("Invalid input...!");
            break;
    }
    return 0;
}