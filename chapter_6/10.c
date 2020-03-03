#include <stdio.h>

int main(void)
{
    const double PI = 3.1415;
    double r, a, b;
    
    printf("Enter radius: \n");
    scanf("%lf", &r);
    printf("Enter a: \n");
    scanf("%lf", &a);
    printf("Enter b: \n");
    scanf("%lf", &b);

    double area = PI*r*r;
    double length = PI*r;
    double area_4 = a*b;
    double per = (a*2)+(b*2);

    printf("area round %.2f\nlength %.2f\narea 4 %.2f\nperimetr %.2f", area, length, area_4, per);
    return 0;
}
