// Write a program that reads input up to # and reports the number of times that the sequence ei occurs. 
#include <stdio.h>
int main(void){
    char pre, now;
    int count = 0;
    pre = ' ';

    while ((now = getchar()) != '#')
    {
        if (pre == 'e' && now == 'i')
            count++;
        pre = now;
    }
    printf("The number of times of \"ei\" are %d.\n", count);

    return 0;
}