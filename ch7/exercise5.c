// Redo exercise 4 using a switch . 
#include <stdio.h>
int main(void){
    int count = 0;
    char ch;

    printf("Enter the character(# to quit): ");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.': 
            count++;
            putchar('!');
            break;
        case '!':
            count++;
            printf("!!");
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("Total made %d substitutions.\n", count);

    return 0;    
}