#include <stdio.h>

#define HOUR 60

int main(void)
{
    //int n = 0;
    
        int min;
    while(min>0)
    {
        printf("введите время в минутах\nдля выхода введите 0\n");
        scanf("%d", &min);
        double hour = (double) min/HOUR;
        printf("%2.1lf часов\n\n", hour);
    }
    return 0;
}
