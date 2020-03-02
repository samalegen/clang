#include <stdio.h>

int main(void)
{
    const int ROW = 116;
    const int CHAR = 116;

    char ch;
    int row;
    int count=0;
    for(row=0; row<=ROW; row++)
    {
        for(ch=(('A'+ (CHAR-count))-row); ch<('A'+(CHAR-count)); ch++)
        {
            printf("%c", ch);
        }
        count++;
        printf("\n");
    }
    return 0;
}
