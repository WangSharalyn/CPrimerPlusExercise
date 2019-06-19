// Use nested loops to produce the following pattern:
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQPSTU
#include <stdio.h>
int main(void)
{
    char ch = 'A';
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++, ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    
    return 0;
}
