#include<stdio.h>

void Temperatures(double f, double *c, double *k);

int main(void)
{
    double f, c, k;

    printf("Please enter an temperature:(°F):");
    while(scanf("%lf", &f) == 1)
    {
        Temperatures(f, &c, &k);
        printf("%lf °F = %lf °C = %lf °K\n", f, c, k);
        printf("Please enter an temperature:(°F):");
    }
}

void Temperatures(double f, double *c, double *k)
{
    const double k_add = 273.16;
    *c = 5.0 / 9.0 * (f - 32.0);
    *k = *c + k_add;
}
