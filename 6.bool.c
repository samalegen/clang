#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;
    _Bool input_is_good;
    printf("Введите число (или q для подсчета и завершегия \n");
    input_is_good = (scanf("%ld", &num)==1);
    while(input_is_good)
    {
        sum = sum + num;
        printf("Введите следующее число \n");
        input_is_good = (scanf("%ld", &num)==1);
    }
    printf("сумма введенных чисел %ld\n", sum);
    return 0;
}
