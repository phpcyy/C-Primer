#include<stdio.h>

int main(void)
{
    float a, b;
    b = 2e20 + 1;
    a = b - 2e20;
    printf("%f\n", a);

    return 0;
}
