#include <stdio.h>

void proud(int n);


int main(void)
{
    int t=5;
    char ch=':';
    float fl =7.0;
    proud(t);
    proud(ch);
    proud(fl);
    return 0;
}

void proud(int n)
{
    while(--n >0)
        printf("_o_");
    printf("\n");
}

