#include<stdio.h>

int main(void)
{
    printf("Please enter 8 double numbers: ");
    double numbers[8];
    double sums[8]; 

    for (int i = 0; i < 8; i++){
        scanf("%lf", &numbers[i]);

        if (i > 0) 
        {
            sums[i] = sums[i-1] + numbers[i];
        } else {
            sums[i] = numbers[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%.2lf\t", numbers[i]);
    }

    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%.2lf\t", sums[i]);
    }
}
