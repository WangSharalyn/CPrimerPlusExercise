#include <stdio.h>
// write a program that asks for first name, last name, and the
// prints the names in the format last,first.
int main(void){
    char first_name[20];
    char last_name[20];

    printf("Please enter your name!\n");
    scanf("%s %s", first_name, last_name);
    printf("%s,%s", last_name, first_name);

    return 0;
}