#include<stdio.h>
float cal(float a, float b);

int main(void)
{
    float a, b;
    while (1) {
        printf("Please enter an integer: ");
        if (scanf("%f", &a) != 1)
        {
            break;
        }

        printf("Please enter another integer: ");
        if (scanf("%f", &b) != 1)
        {
            break;
        }

        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n", a, b, a, b, cal(a, b));
    }
}

float cal(float a, float b)
{
    return (a - b) / (a * b);
}
