#include <stdio.h>

#define FAR 33.8
#define KEL 273.0

int temp(double cel);

int main(void)
{
    double cel; 
    while(cel==!'q')
    {
        printf("enter celsia\n");
        scanf("%lf", &cel);
        temp(cel);
    }
    return 0;
}

int temp(double cel)
{
    double kel = cel + KEL;
    double far = cel +FAR;
    printf("температура в фаренгейт %.1f\n", far);
    printf("температура в кельвина %.1f\n", kel);

    return 0;
}
