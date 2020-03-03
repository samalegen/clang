#include <stdio.h>
int main(void)
{
    const int MIN = 60;
    int min, hour, min1;
    printf("enter min\n");

    while((scanf("%d", &min))==1)
    {
        hour=min/MIN;
        min1=min%MIN;

        printf("%d hour %d minuts\n", hour, min1);
    }
    return 0;
}
