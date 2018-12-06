#include<stdio.h>
#define WEEK 7
int main(void)
{
    int days;
    while (1) 
    {
        printf("Please input the days:");
        scanf("%d", &days);
        if (days <= 0)
        {
            break;
        }

        printf("%d days are %d weeks, %d days.\n", days, days / WEEK, days % WEEK);
    }
}
