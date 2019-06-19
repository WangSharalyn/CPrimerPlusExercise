// Write a program that creates an array with 26 elements and stores
// the 26 lowercase letters in it. Also have it show the array contents.
#include <stdio.h>
int main(void)
{
    char letters[26];
    int i;
    char l;

    for (i = 0, l = 'a'; i < 26; i++, l++)
    {
        letters[i] = l;
        printf("%c", l);
    }    

    return 0;
}
