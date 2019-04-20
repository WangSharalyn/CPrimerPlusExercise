#include <stdio.h>
#include <string.h>
int main(void){
    char first_name[20];
    int width;

    printf("Please enter your first name !\n");
    scanf("%s", first_name);

    // Prints it enclosed in double quotation marks
    printf("\"%s\"\n", first_name);
    // Prints it in a field 20 characters wide, with the whole field 
    // in quotes and the name at the right end of the field
    printf("\"%20s\"\n", first_name);
    // Prints it at the left end of a filed 20 characters wide, with
    // the whole field enclosed in quotes
    printf("\"%-20s\"\n", first_name);
    // Prints it in a filed three characters wider than the name
    width = strlen(first_name) + 3;
    printf("%*s\n", width, first_name);

    return 0;
}