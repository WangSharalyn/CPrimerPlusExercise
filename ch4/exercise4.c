#include <stdio.h>
int main(void){
    char name[10];
    float height;

    printf("Please enter your height in inches and your name!\n");
    scanf("%f %s", &height, name);
    printf("%s, you are %.3f feet tall\n", name, height/12.0);

    return 0;
}