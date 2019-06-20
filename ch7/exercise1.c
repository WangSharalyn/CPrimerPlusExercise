// Write a program that reads input until encountering the # character and then reports the number of spaces read,
// the number of newline characters read, and the number of all other characters read. 
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int n_space, n_line, n_letter;
    n_space = n_line = n_letter = 0;
    printf("Enter sentence (# to quit): \n");

    while ((ch = getchar()) != STOP)
    {
        if (ch == '\n')
        {
            n_line++;
        }else if (ch == ' ')
        {
            n_space++;
        }else
        {
            n_letter++;
        }        
    }
    printf("There are %d spaces, %d lines and %d letters.\n", n_space, n_line, n_letter);

    return 0;    
}