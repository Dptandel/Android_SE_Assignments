// Write a program in C to compare two strings without using string library functions.

#include <stdio.h>
int main () {
	int count1 = 0, count2 = 0, flag = 0, i = 0;
	char string1[30], string2[30];

	printf ("Enter the First string\n");
	gets(string1);

	printf ("Enter the Second string\n");
	gets(string2);

	while (string1[count1] != '\0') {
		count1++;
    }

	while (string2[count2] != '\0') {
		count2++;
    }

	while (string1[i] == string2[i] && string1[i] != '\0') {
		i++;
	}

	if (string1[i] > string2[i])
		printf ("First string is greater than Second string\n");
	else if (string1[i] < string2[i])
		printf("Second string is greater than First string\n");
	else
		printf ("Both strings are EQUAL\n");

	return 0;
}