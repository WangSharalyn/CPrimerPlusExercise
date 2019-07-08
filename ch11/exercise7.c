// The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1 , truncating s2
// or padding it with extra null characters as necessary. The target string may not be null-terminated
// if the length of s2 is n or more. The function returns s1 . Write your own version of this function;
// call it mystrncpy() . Test the function in a complete program that uses a loop to provide input values for feeding to the function. 
#include <stdio.h>
#include <string.h>
#define SIZE 80
char * mystrncpy(char * s1, char * s2, int n);
int main(void)
{
    char string1[SIZE];
    char string2[SIZE];
    int num;

    while (1)
    {
        puts("Enter a string.");
        fgets(string2, SIZE, stdin);
        puts("Enter the number of character you want to copy: ");
        scanf("%d", &num);

        mystrncpy(string1, string2, num);
        puts(string1);

        puts("Do you want to continue? y or n");
        getchar();
        if(getchar() == 'n')
            break;
        else
            getchar();
    }
    
    return 0;
}
char * mystrncpy(char * s1, char * s2, int n)
{
    int sup, i, length;

    length = strlen(s2);
    
    if(n > SIZE)
        sup = length;
    else
        if(n < length)
            sup = n;
        else
            sup = length;    
    for(i = 0; i < sup; i++)
        s1[i] = s2[i];
    s1[i] = '\0';

    return s1;    
}