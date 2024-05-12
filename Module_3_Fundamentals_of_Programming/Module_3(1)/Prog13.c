// Find character value from ascii

#include <stdio.h>

int main() {  
    int ascii;
    
    printf("Enter ASCII value: ");
    scanf("%d", &ascii);
    
    char character = ascii;
    printf("Character value of %d = %c", ascii, character);
    
    return 0;
}