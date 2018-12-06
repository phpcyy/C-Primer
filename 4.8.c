#include<stdio.h>
#define GALLON 3.785
#define MILE 1.609

int main(void)
{
    float distance, consume;
    printf("Please input the distance(mile):");
    scanf("%f", &distance);
    printf("Please input the oil cosume (gallon):");
    scanf("%f", &consume);

    printf("%.1fML/G\n", distance / consume);
    printf("%.1fL/100KM\n", 100 * consume * GALLON / (distance * MILE));

}
