#include <stdio.h>
#define S_PER_M 60;
#define S_PER_H 3600;
#define M_PER_K 0.62137;

int main(void)
{
    double distk, distm;
    double rate;
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;
    printf("Эта программа пересчитывает дистанцию в метрической системе");
    printf("Скооость в милях в час");
    printf("Ввелите дистанцию в километрах:");
    scanf("%lf", &distk);
    printf("Введите время в минутах и секундах");
    printf("Начните с минут:");
    scanf("%d", &min);
    printf("Введите секунды:", &sec);
    time = S_PER_M*min + sec
    distm = M_PER_M*distk;
    return 0;
}
