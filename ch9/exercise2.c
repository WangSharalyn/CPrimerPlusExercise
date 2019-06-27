// Devise a function chline(ch,i,j) that prints the requested character in columns i through j . Test it in a simple driver. 
#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
    char ch;
    int i, j;

    printf("Enter character, columns i and rows j: ");
    scanf("%c%d%d", &ch, &i, &j);

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k < j; k++)
    {
        for (int l = 0; l < i; l++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
    
}