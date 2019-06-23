// Write a program that reads input as a stream of characters until encountering EOF .
// Have it report the number of uppercase letters, the number of lowercase letters,
// and the number of other characters in the input. You may assume that the numeric
// values for the lowercase letters are sequential and assume the same for uppercase.
// Or, more portably, you can use appropriate classification functions from the ctype.h library. 
#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch, upper_count, lower_count;
    upper_count = lower_count = 0;

    while ((ch = getchar()) != EOF)
    {
        if(islower(ch))
            lower_count++;
        else if(isupper(ch))
            upper_count++;
        else
            continue;
    }
    printf("There are %d uppercase letters and %d lowercase letters.\n", upper_count, lower_count);
    
    return 0;
}