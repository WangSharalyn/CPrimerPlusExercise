// Devise a program that counts the number of characters in its input up to the end of file.
#include <stdio.h>
int main(void){
    int ch, count;
    count = 0;

    while ((ch = getchar()) != EOF)
        count++;

    printf("There are %d words.\n", count);

    return 0;    
}