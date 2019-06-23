#include <stdio.h>
int main(void)
{
    char response;
    int guess = 50;
    int low = 1, up = 100;

    printf("Pick an integer from 1 to 100. I will try to guess");
    printf("it.\nRespond with a y of my guess is right and with");
    printf("\na h if it is high, a l if it is low.\n");
    printf("Un...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if(response == 'h')
            up = guess;
        else if(response == 'l')
            low = guess;
        else
            printf("Sorry, I understand only y, h or l.\n");
        guess = (up + low)/2;
        printf("Well, then, is it %d?\n", guess);   
        
        while (getchar() != '\n')
            continue;        
    }
    
    return 0;
}