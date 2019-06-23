// Write a program that reads input as a stream of characters until encountering EOF .
// Have it report the average number of letters per word. Don’t count whitespace as being
// letters in a word. Actually, punctuation shouldn’t be counted either, but don’t worry
// about that now. (If you do want to worry about it, consider using the ispunct() function from the ctype.h family.) 
#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch, count, letter_count;
    count = letter_count = 0;

    while ((ch = getchar()) != EOF)
    {
        if(isspace(ch))
            count++;
        else if(ispunct(ch))
            continue;
        else
            letter_count++;
    }
    printf("The average number of letters per word is %.2f.\n", letter_count * 1.0 / count);

    return 0;
}