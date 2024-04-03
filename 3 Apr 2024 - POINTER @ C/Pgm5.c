/**
 * C program to concatenate two strings using strcat()
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    strcat(str1, str2);

    printf("Concatenated string = %s", str1);

    return 0;
}
