#include<stdio.h>

int main(void)
{
    char c, p;

    int t = 0;

    while (1)
    {
        scanf("%c", &c);
        if (p == 'e' && c =='i')
        {
            t++;
        }
        if (c == '#')
        {
            break;
        }
        p = c;
    }

    printf("occurence time of \"ei\" is %d", t);
}
