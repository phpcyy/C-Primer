#include<stdio.h>

int main(void)
{
    int a, b, sum;
    printf("Enter lower and uppper integer limits: ");

    do {
        scanf("%d %d", &a, &b);
        if ( a > b) {
            break;
        }
        sum = 0;
        for (int i = a; i <= b; i++)
        {
            sum += i * i;
        }
        printf("The sums of the square from %d to %d is %d\n", a * a, b * b, sum);
    } while (1);
}
