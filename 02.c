#include <stdio.h>

#define MAX 90

int main(void)
{
    int n=64;
    while(++n < (MAX +1))
        printf("%c\t", n);
    return 0;

}
