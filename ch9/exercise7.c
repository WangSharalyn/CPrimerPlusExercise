#include <stdio.h>
#include <ctype.h>
int letter(char ch);
int main(void)
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        if(isalpha(ch))
            printf("The position of %c is %d.\n", ch, letter(ch));
    }
    
    return 0;
}
int letter(char ch)
{
    int result;
    if(isalpha(ch))
        result = toupper(ch) - 64;
    else
        result = -1;

    return result;
}