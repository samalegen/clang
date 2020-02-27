#include <stdio.h>

int cub(float i);

int main(void)
{
    float i;
    printf("enter num\n");
    scanf("%f", &i);
    cub(i);
    return 0;
}

int cub(float i)
{
    double cub = i*i*i;
    printf("%lf", cub);
    return 0;
}
