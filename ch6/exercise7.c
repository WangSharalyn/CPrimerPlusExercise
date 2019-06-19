// Write a program that reads a single word into a character array and 
// then prints the word backward.
#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[10];
    int size;

    printf("Enter a single word: ");
    scanf("%s", word);

    size = strlen(word);

    for (int i = size-1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    

    return 0;
}
