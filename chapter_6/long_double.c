#include <stdio.h>

int main(void)
{
    double dfloat = 0.1234567890133556778456765444567765445676519;
    printf("%zd bytes, %zd bites\n", sizeof(double), sizeof(double)*8);
    printf("double = %.43f\n", dfloat);
    long double ldfloat = 0.1234567890133556778567788876655444567887446679;
    printf("%zd bytes, %zd bites\n", sizeof(long double), sizeof(double)*8);
    printf("long double = %.43Lf\n", ldfloat);

    return 0;
}
