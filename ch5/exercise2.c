// Write a program that asks for an integer and then prints all the 
// integers from (and including) that value up to (and including) a 
// value larger by 10. (That is, if the input is 5, the output runs from
// 5 to 15.) Be sure to separate each output value by a space or tab or newline.
#include <stdio.h>
int main(void) {
    int input, sup;

    printf("Please enter an integer!\n");
    scanf("%d", &input);
    sup = input + 10;
    input--;

    while (++input <= sup)
    {
        printf("%d\n", input);
    }
    
    return 0;
}