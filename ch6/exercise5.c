// Have a program request the user to enter an uppercase letter. Use nested
// loops to produce a pyramid pattern like this:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// The pattern should extend to the character entered. For example, the
// preceding pattern would result from an input value of E.
#include <stdio.h>
int main(void)
{
    char ch, l;
    int size;
    printf("Enter the uppercase letter: ");
    scanf("%c", &ch);

    size = ch - 'A' + 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
            printf(" ");
        for (int j = 0, l = 'A'; j <= i; l++, j++)
            printf("%c", l);
        for (int j = 0, l = 'A' + i - 1; j < i; j++, l--)
            printf("%c", l);
        printf("\n");   
    }
    
    return 0;
}
