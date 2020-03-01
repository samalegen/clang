#include <stdio.h>

int main(void)
{
    int num;
    for(printf("Продолжайте вводить цифры\n"); num!=6;) 
        scanf("%d", &num);
    printf("Вот то число что было нужно");
    return 0;
}
