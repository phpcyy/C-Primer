#include<stdio.h>

int main(void)
{
    int n;
    printf("please enter a positive integer: ");

    scanf("%d", &n);

    float sum1 = 0, sum2 = 0;
    for(int i = 1; i <= n; i++) 
    {
        sum1 += 1.0 / i;
        if (i % 2 == 1) {
            sum2 += 1.0 / i;
        } else {
            sum2 -= 1.0 / i;
        }
    }

    printf("sum1 is %f\n", sum1);
    printf("sum2 is %f\n", sum2);
}
