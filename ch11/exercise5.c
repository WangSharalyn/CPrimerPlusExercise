#include <stdio.h>
#include <string.h>
#define SIZE 80
char * search_char(char * str, char a);
int main(void)
{
    char str1[SIZE];
    char ch;
    char * ptr;

    while (1)
    {
        puts("Enter a string (q to quit).");
        fgets(str1, SIZE, stdin);
        if( *str1 == 'q')
            break;
        puts("Enter a character to search in string.");
        ch = getchar();
        ptr = search_char(str1, ch);
        if(ptr)
            printf("%p\n", ptr);
        else
            puts("There are no this character in this string.");
    }
    
    return 0;
}
char * search_char(char * str, char a)
{
    int n, i;
    char * ptr;
    ptr = NULL;

    n = strlen(str);
    for ( i = 0; i < n; i++)
    {
        if(str[i] == a)
            ptr = &str[i];
    }
    
    return ptr;
}