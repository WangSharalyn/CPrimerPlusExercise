// Modify and test the function in exercise 1 so that it stops after n characters or after the first blank, tab, or newline, whichever comes first. (Don’t just use scanf() .)
#include <stdio.h>
#define SIZE 40
void get_str(char * str, int n);
int main(void)
{
    int str1[SIZE];
    int n;
    scanf("%d", &n);

    get_str(str1, n);
    puts(str1);

    return 0;
}
void get_str(char * str, int n)
{
    int i;
    char item;

    item = getchar();
    for (i = 0; i < n; i++)
    {
        item = getchar();
        if(item == ' ' || item == '\t' || item == EOF)
            break;
        * (str + i) = item;
    }
    * (str + i) = '\0';
}