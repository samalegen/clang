#include <stdio.h>

int main(void)
{
    int n =0;
    int num;
    printf(" Введите целое число\n");
    scanf("%d", &num);
    while(++n<=11)
        {
        printf("%d\n", num);
        ++num;
        }
    return 0;
}
