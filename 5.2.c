#include <stdio.h>
#define WEEK 7

int main(void)
{
    int day;
    while(day>0)
    {
    printf("введите количество дней\n");
    scanf("%d", &day);
    int week = day / WEEK;
    int day_o = day % week;
    printf("%d дней составляет %d недель, %d дней\n\n", day, week, day_o);
    }
    return 0;
}
