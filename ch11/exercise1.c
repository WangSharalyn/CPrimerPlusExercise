// Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines),
// storing the results in an array whose address is passed as an argument. 
#include <stdio.h>
#define SIZE 40
void get_str(char * str);
int main(void)
{
    char str1[SIZE];
    puts("Enter a string!");
    get_str(str1);
    fputs(str1, stdout);

    return 0;
}
void get_str(char * str)
{
    fgets(str, SIZE, stdin);
}