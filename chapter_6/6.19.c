#include <stdio.h>

int main(void)
{
    const int WEEK = 7;
    const int MONTH = 30;
    const int YEAR = 365;
    int week, month, year, i, day;
    printf("Введите колличество дней: \n");

    while(day>=0)
    {
        scanf("%d", &day);
        week = ((day%YEAR) % month)/WEEK;
        month = (day%YEAR)/MONTH;
        year = day/YEAR;
        printf("%d year, %d month, %d week", year, month, week);
    }

    return 0;
}
