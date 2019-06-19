// Write a program that reads in a line of input and then prints the line
// in reverse order. You can store the input in an array of char; assume
// that the line is no longer than 255 characters.
#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch[255] = "Hello, I'm here.\n";

    for (int i = 0; ch[i] != '\n'; i++)
    {
        printf("%c", ch[i]);
    }   
    
    return 0;
}
