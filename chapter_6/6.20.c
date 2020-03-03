#include <stdio.h>

int main(void)
{
    const int WEEK = 7;
    int week, day, day1;
    printf("Введите колличество дней: \n");

    while(day>=0)
    {
        scanf("%d", &day);
        day1 = day%WEEK;
        week = day/WEEK;
        printf("%d week and %d days", week, day1);
    }

    return 0;
}
