// Convert country’s name in abbreviate form

#include <stdio.h>
int main() {

    char country[20];

    printf("Enter the name of country(in capital): ");

    scanf("%s", &country);

    printf("Abbreviated name of country %s is %c%c", country, country[0], country[1]);

    return 0;

}