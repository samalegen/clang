#include <stdio.h>
#define S_PER_M 60
#define S_PER_H 3600
#define M_PER_K 0.62137

int main(void)
{
    double distk, distm;
    double rate;
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;
    
    printf("Эта программа пересчитывает дистанцию в метрической системе\n");
    printf("Скорость в милях в час\n");
    printf("Ввелите дистанцию в километрах:\n");
    scanf("%lf", &distk);
    printf("Введите время в минутах и секундах\n");
    printf("Начните с минут:\n");
    scanf("%d", &min);
    printf("Введите секунды:\n");
    scanf("%d", &sec);
    
    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm/time * S_PER_H;
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;
    printf("Вы пробежали %1.2f км (%1.2f мили) за %d мин %d сек.\n", distk, distm, min, sec);
    printf("Такая скрость соответствуюе %d мили за мин.", mmin);
    printf("%d сек.\nВаша средняя скорость равняется %1.2f мили в час", msec, rate);
    return 0;
}

