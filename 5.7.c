#include<stdio.h>
double cubic(double a);

int main(void)
{
    double a;
    printf("Please enter a number of double type: ");
    scanf("%lf", &a);
    printf("cubic = %lf", cubic(a));

    return 0;
}

double cubic(double a)
{
    return a * a * a;
}
