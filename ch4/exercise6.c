#include <stdio.h>
#include <string.h>
/*Write a program that requests the user's first name and then the
user's last name. Have it print the entered names on one line and
the number of letters in each name on the following line. Align each
letter count with the end of the corresponding name.*/
int main(void){
    char first_name[10];
    char last_name[10];

    printf("Please enter your first name!\n");
    scanf("%s", first_name);
    printf("Please enter your last name!\n");
    scanf("%s", last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));

    return 0;
}