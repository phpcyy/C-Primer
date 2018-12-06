#include<stdio.h>

#define DUNBAR_NUMBER  150

int main(void)
{
    int start = 5, i = 0;
    while (start < DUNBAR_NUMBER) 
    {
        i++;
        start -= i;
        start *= 2;
        printf("At the %dth week, Robnud has %d friends\n", i, start);
    }
}
