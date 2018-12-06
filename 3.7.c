#include<stdio.h>

int main(void)
{
    printf("请输入你的身高(cm): ");
    float height;
    scanf("%f", &height);
    printf("你的身高是 %f 英寸", height / 2.54);
}
