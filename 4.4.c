#include<stdio.h>

int main(void)
{
    printf("请输入你的身高(cm): ");
    float height;
    scanf("%f", &height);

    printf("Dabney, you are %.3f meter tall.", height / 100);

    return 0;
}
