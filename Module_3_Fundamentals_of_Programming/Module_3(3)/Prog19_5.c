// Patterns: 
/*

                * 
              * * * 
            * * * * * 
          * * * * * * *
        * * * * * * * * *   

*/

#include <stdio.h> 

int main() { 
    int row, space, col; 

    for (row = 0; row < 5; row++) {
        for (space = 5; space >= 2 * row - 1; space--) { 
            printf(" "); 
        }

        for (col = 0; col < 2 * row + 1; col++) { 
            printf("* "); 
        }
        printf("\n"); 
    } 
    return 0; 
}
