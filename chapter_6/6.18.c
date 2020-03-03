#include <stdio.h>

int main(void)
{
    int num;
    int i=0;
    printf("enter num");
    scanf("%d", &num);
    while(++i<11)
    {
        printf("%d\n", num);
        num++;
    }
    return 0;
}
