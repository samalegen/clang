#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;
    printf("Введите число (или q для подсчета и завершегия) ");
    status = scanf("%ld", &sum);
    while(status == 1)
    {
        sum = sum + num;
        printf("Введите следующее число ");
        status = scanf("%ld", &num);
        printf("сумма введенных чисел %ld", sum);
    }
    return 0;
}
