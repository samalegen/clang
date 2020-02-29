#include <stdio.h>
#define INCH 0.3937
#define FT 0.0328

int main(void)
{
    int cm;
    while(cm > 0)
    {
        printf("введите сантиметры\n");
        scanf("%d", &cm);
        double inch = cm * INCH;
        double ft = cm * FT;
        printf("В %d см %.1f дюймов, %.1f футов\n\n", cm, inch, ft);
    }
    return 0;
}
