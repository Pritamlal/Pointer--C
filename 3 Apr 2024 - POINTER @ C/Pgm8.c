/**
 * C program to copy one string to another string
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];
    int i;


    printf("Enter any string: ");
    gets(text1);


    i = -1;
    while(text2[i] = text1[++i]);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}
