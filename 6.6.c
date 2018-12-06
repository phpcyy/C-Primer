#include<stdio.h>

int main(void)
{
    int min, max;

    printf("Please enter the min integer: ");
    scanf("%d", &min);
    printf("Please enter the min integer: ");
    scanf("%d", &max);

    if (min > max)
    {
        printf("min must be less than max!");
    }

    while(min <= max)
    {
        printf("%d\t%d\t%d\n", min, min * min, min * min * min);
        min++;
    }

    return 0;
}
