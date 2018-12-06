#include<stdio.h>
#define FEET_INCH 12
#define INCH_CM 2.54

int main(void)
{
    float height; 
    while (1)
    {
        printf("Please input your height: ");
        scanf("%f", &height);
        if (height <= 0)
        {
            break;
        }

        printf("%.1f cm = %d feet, %.1f inches\n", height, (int)(height / INCH_CM / FEET_INCH), height / INCH_CM - (int)(height / INCH_CM / FEET_INCH) * FEET_INCH);
    }

}

