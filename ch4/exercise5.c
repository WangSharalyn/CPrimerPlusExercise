#include <stdio.h>
// calculate the download time for file
int main(void){
    const float byte = 8;
    float dowload_speed, file_size;

    printf("Please enter the download speed in megabits per\
second(Mbs) and the size of a file in megabytes(MB)!\n");
    scanf("%f %f", &dowload_speed, &file_size);
    printf("At %.2f megabits per second, a file of %.2f megabytes \
downloads in %.2f seconds.", dowload_speed, file_size, file_size * byte/dowload_speed);

    return 0;
}