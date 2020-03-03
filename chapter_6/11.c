#include <stdio.h>


int main(void)
{
    long long int num;
    int status;
    printf("Enter num \n");
    status = scanf("%lld", &num);
 
    while(status ==1)
    {
    printf("Enter num \n");
    scanf("%lld", &num);
    printf("8:%llo  10:%lld  16:%llx\n", num, num, num);
    }
    return 0;
}
