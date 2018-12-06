#include<stdio.h>

int main(void)
{
    float f = 3.156e7;
    printf("请输入你的年龄:");
    float age;
    scanf("%f", &age);

    printf("你已经度过了%f秒\n", age * f);
}
