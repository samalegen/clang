#include <stdio.h>

int main(void)
{
    int count, sum, i;
    count = 0;
    sum = 0;
    scanf("%d", &i);
    while(++count <i)
        {
        //printf("enter num");
        //scanf("%d", &i);
        sum = count * count;
        printf("Sum = %d\n", sum);
        }
    return 0;
}
