// Modify the get_first() function of Listing 8.8 so that it returns the first non-whitespace character encountered. Test it in a simple program. 
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
   int ch;

   ch = get_first();

   printf("The first non-whitespace character is %c", ch);

   return 0;
}

char get_first(void)
{
    int ch, cr; 

    while ((ch = getchar()) != '\n')
    {
        if(!isspace(ch))
            {
                cr = ch;
                while (getchar() != '\n')
                    continue;
            }        
    }

    return cr;  
}