#include <stdio.h>

int main(void)
{
    int cube;
    printf("    n    n в кубе\n");
    for(cube=1; cube<=10; cube++)
        printf("%5d %5d\n", cube, cube*cube*cube);
    return 0;
}
