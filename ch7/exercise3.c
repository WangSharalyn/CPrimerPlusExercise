// Write a program that reads integers until 0 is entered. After input terminates, the program
// should report the total number of even integers (excluding the 0) entered, the average value
// of the even integers, the total number of odd integers entered, and the average value of the odd integers. 
#include <stdio.h>
int main(void){
    int num, even, odd, e_sum, o_sum;
    even = odd = e_sum = o_sum = 0;

    printf("Enter integer: ");
    while (scanf("%d", &num) == 1)
    {
        if (num == 0)
            break;
        else if(num % 2 == 0){
            even++;
            e_sum += num;
        }else{
            odd++;
            o_sum += num;
        }       
    }
    
    printf("Totally %d even integers, the average is %.2f,\n", even, even == 0 ? 0:e_sum * 1.0 / even);
    printf("and %d odd integers, the average value is %.2f.\n", odd, odd == 0?0:o_sum * 1.0 / odd);

    return 0;    
}