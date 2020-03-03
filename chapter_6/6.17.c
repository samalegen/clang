#include <stdio.h>
int main(void)
{
    const int MIN = 60;
    int min, hour, min1;
    printf("enter min\n");
   // scanf("%d", &min);
    while(min>0)
    {
        scanf("%d", &min);
        hour=min/MIN;
        min1=min%MIN;
        

        printf("%d hour %d minuts\n", hour, min1);
    }
    return 0;
}
