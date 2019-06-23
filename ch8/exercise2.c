#include <stdio.h>
int main(void){
    int ch, count;
    count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch >= ' ' )
        {
            printf("%c-%d ", ch, ch);
        }else if(ch == '\n')
            printf("\\n-%d ", ch);
        else if(ch == '\t')
            printf("'\\t-%d", ch);
        else
            printf("^%c-%d", ch + 64, ch);

        count++;

        if(count % 10 == 0)
            printf("\n");                
    }
    
    return 0;
}