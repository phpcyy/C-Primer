#include<stdio.h>

int main(void) 
{
    printf("请输入水的夸脱数:");
    float $a;
    scanf("%f", &$a);
    float f = 3e-23;
    printf("水分子的数量为: %lf", $a * 950 / f);
}
