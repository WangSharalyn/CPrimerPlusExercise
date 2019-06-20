// Using if else statements, write a program that reads input up to # ,
// replaces each period with an exclamation mark, replaces each exclamation
// mark initially present with two exclamation marks, and reports at
// the end the number of substitutions it has made. 
#include <stdio.h>
int main(void){
    int count = 0;
    char ch;

    printf("Enter the character(# to quit): ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            count++;
            putchar('!');
        }else if (ch == '!')
        {
            count++;
            printf("!!");
        }else
        {
            putchar(ch);
        }
    }
    printf("Total made %d substitutions.\n", count);

    return 0;    
}