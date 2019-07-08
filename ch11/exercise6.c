// Write a function called is_within() that takes a character and a string pointer as its two function parameters.
// Have the function return a nonzero value (true) if the character is in the string and zero (false) otherwise.
// Test the function in a complete program that uses a loop to provide input values for feeding to the function. 
#include <stdio.h>
#include <string.h>
#define SIZE 80
int is_within(char ch, char * str);
int main(void)
{
    char string[SIZE];
    char character;
    int signal;

    while (1)
    {
        puts("Enter a string: ");
        gets(string);
        puts("Enter a character to search(q to quit): ");
        if((character = getchar()) == 'q')
            break;
        getchar();
        signal = is_within(character, string);

        printf("The signal is %d.\n", signal);
    }
    
    return 0;
}
int is_within(char ch, char * str)
{
    int length, i, res;
    length = strlen(str);
    res = 0;

    for ( i = 0; i < length; i++)
    {
        if(str[i] == ch)
            res = 1;
    }
    
    return res;
}