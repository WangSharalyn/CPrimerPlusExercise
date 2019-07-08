// Design and test a function that reads the first word from a line of input into an array and discards the rest of the line.
// It should skip over leading whitespace. Define a word as a sequence of characters with no blanks, tabs, or newlines in it. Use getchar() , not 
#include <stdio.h>
#include <ctype.h>
#define SIZE 20
void get_word(char * str1, char * str2);
int main(void)
{
    char word[SIZE];
    char input[80];
    puts("Enter a sentence, please.");
    fgets(input, 80, stdin);
    get_word(word, input);
    fputs(word, stdout);

    return 0;
}
void get_word(char * str1, char * str2)
{
    int i, j;
    i = j = 0;
    for(i = 0; i < 80; i++)
    {
        if(isspace(str2[i]) && j == 0)
            continue;
        else if(isspace(str2[i]) && j != 0)
            break;
        else
        {
            str1[j] = str2[i];
            j++;
        }
    }
    str1[j] = '\0';
}