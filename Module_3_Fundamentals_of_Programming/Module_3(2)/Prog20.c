// Write a program in C to read any Month Number in integer and display the number of days for this month.

#include <stdio.h>

int main () {
    int month_number;

    printf ("Enter month number: ");
    scanf ("%d", &month_number);

    switch (month_number) {
        case 1 :
        case 3 :
        case 5 :
	    case 7 :
	    case 8 :
	    case 10 :
	    case 12 :
            printf("This month have 31 days.");
            break;
        case 2:
	        printf("This month have only 28 days, and in a leap year, it has 29 days");
	        break;
        case 4:
	    case 6:
	    case 9:
	    case 11:
	        printf("This month have 30 days. \n");
	        break;
        default:
	        printf("Invalid Month number.\n Please try again ....");
	    break;
    }

    return 0;
}
