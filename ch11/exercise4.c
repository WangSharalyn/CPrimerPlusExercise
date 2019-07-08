// Design and test a function like that described in Programming Exercise 3 except that it
// accepts a second parameter specifying the maximum number of characters that can be read. 
#include <stdio.h>
#include <ctype.h>
#define SIZE 20
void get_word(char * str1, char * str2, int n);
int main(void)
{
    char word[SIZE];
    char input[80];
    puts("Enter a sentence, please.");
    fgets(input, 80, stdin);
    get_word(word, input, 3);
    fputs(word, stdout);

    return 0;
}
void get_word(char * str1, char * str2, int n)
{
    int i, j;
    i = j = 0;
    for(i = 0; i < 80; i++)
    {
        if(isspace(str2[i]) && j == 0)
            continue;
        else if(isspace(str2[i]) && j != 0)
            break;
        else if(j >= n)
            break;
        else
        {
            str1[j] = str2[i];
            j++;
        }
    }
    str1[j] = '\0';
}