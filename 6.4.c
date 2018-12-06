#include<stdio.h>

int main(void)
{
    char a = 'A';
    int width = 1;
    while(a <= 'U'){
        for(int i = 0; i < width && a <= 'U'; i++, a++)
        {
            printf("%c", a);
        }
        printf("\n");
        width++; 
    }
}
