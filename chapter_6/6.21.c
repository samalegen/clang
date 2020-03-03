#include <stdio.h>

int main(void)
{
    int index;
    char abc[26];
    char ch = 'A';
    for(index=0; index<=26; ++index)
    {
        abc[index]= ch;
        ch++;
        printf("%c ", abc[index]);
    }

    return 0;
}
