// Write a function that takes a string as an argument and removes the spaces from the string.
// Test it in a program that uses a loop to read lines until you enter an empty line.
// The program should apply the function to each input string and display the result. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
void delete_space(char * str);
int main(void)
{
    char string[SIZE];
    while(1)
    {
        puts("Enter a string.");
        gets(string);

        puts("After removing the space of the string :");
        delete_space(string);
        puts("Do you want to continue? y or an empty line to quit.");
        if(getchar() == '\n')
            break;
        else
            getchar();
    }
}
void delete_space(char * str)
{
    int len, i;
    len = strlen(str);

    for(i = 0; i < len; i++)
        if(!isspace(str[i]))
            putchar(str[i]);
    putchar('\n');
}