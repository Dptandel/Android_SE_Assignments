// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>

int removeSpace(char *str){
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    int freq[256] = {0};
    int i = 0, maxFreq = 0;
    char mostFreqChar;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    removeSpace(str);

    while (str[i] != '\0') {
        freq[str[i]]++;
        i++;
    }

    // maximum frequency of characters
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    // character with the maximum frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] == maxFreq) {
            mostFreqChar = i;
            break;
        }
    }

    printf("The most frequent character is '%c' appearing %d times.\n", mostFreqChar, maxFreq);

    return 0;
}
