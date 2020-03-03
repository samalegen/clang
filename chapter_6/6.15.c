#include <stdio.h> 
int main(void) 
{  
    int i = 0;  
    while (++i < 4)  
        printf("Здравствуйте! ");  
    do  printf("До свидания! ");  
    while (i++ < 8);  
    return 0; 
}
