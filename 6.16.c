#include<stdio.h>

int main(void)
{
    int money = 100, i;
    double profits1 = money, profits2 = money;

    for(i = 0; profits1 >= profits2; i++)
    {
        profits1 += money * 0.1;
        profits2 *= 1.05;
    }

    printf("After %d years Deirdre's investment exceed Daphne's, their investments are %lf and %lf on that time. ", i, profits1, profits2);
}
