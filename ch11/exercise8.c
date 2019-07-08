// Write a function called string_in() that takes two string pointers as arguments. If the second
// string is contained in the first string, have the function return the address at which
// the contained string begins. For instance, string_in("hats", "at") would return the address of the a in hats .
// Otherwise, have the function return the null pointer. Test the function in a complete program that
// uses a loop to provide input values for feeding to the function. 
#include <stdio.h>
#include <string.h>
#define SIZE 80
char * string_in(char * s1, char * s2);
int main(void)
{
    char string1[SIZE];
    char string2[SIZE];
    char * ptr;

    while (1)
    {
        puts("Enter the first string to search the second string.");
        gets(string1);
        puts("Enter the second string.");
        gets(string2);

        ptr = string_in(string1, string2);
        if(ptr)
            printf("The pointer is %p.\n", ptr);
        else
            printf("Not in !\n");

        puts("Do you want to continue? y or n");
        if(getchar() == 'n')
            break;
        else
            getchar();
    }
    
    return 0;
}
char * string_in(char * s1, char * s2)
{
    int len1, len2, i;
    char * res;
    len2 = strlen(s2);
    len1 = strlen(s1);

    res = NULL;

    for (i = 0; i < len1; s1++, i++)
        if(strncmp(s1, s2, len2) == 0)
        {
            res = s1;
            break;
        }
    
    return res;
}