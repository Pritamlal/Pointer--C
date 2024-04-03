/**
 * C program to copy one string to another string using strcpy()
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];


    printf("Enter any string: ");
    gets(text1);


    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}
