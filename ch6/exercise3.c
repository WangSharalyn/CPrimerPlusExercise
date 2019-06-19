// Use nested loops to produce the following pattern:
// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA
#include <stdio.h>
int main(void)
{
    int j;
    char l;

    for (int i = 0; i < 6; i++)
    {
        for (j = 0, l = 'F'; j <= i; j++, l--)
        {
            printf("%c", l);
        }
        printf("\n");        
    }
    
    return 0;
}
