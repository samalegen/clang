
#include <stdio.h>

int main(void)
{
    char ch;
    for(ch='a'; ch<='z'; ch++)
        printf("Значение %c в ASCII %d\n", ch, ch);
    return 0;
}
