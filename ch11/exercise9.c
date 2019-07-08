// Write a function that replaces the contents of a string with the string reversed. Test the function
// in a complete program that uses a loop to provide input values for feeding to the function. 
#include <stdio.h>
#include <string.h>
#define SIZE 80
void inverse(char * s1);
int main(void)
{
    char string1[SIZE];

    while(1)
    {
        puts("Enter a string.");
        gets(string1);

        puts("reversed string is :");
        inverse(string1);

        if(getchar() == '\n')
            break;
    }

    return 0;
}
void inverse(char * s1)
{
    int len1, i;
    len1 = strlen(s1);

    for(i = len1-1; i >= 0; i--)
        putchar(s1[i]);
    putchar('\n');
}