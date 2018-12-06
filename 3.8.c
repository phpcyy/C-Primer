#include<stdio.h>

int main(void)
{
    printf("请输入杯数: ");

    float cup;
    scanf("%f", &cup);

    printf("%3.2f 品脱\n", cup / 2);
    printf("%3.2f 盎司\n", cup * 8);
    printf("%3.2f 大汤勺\n", cup * 8 * 2);
    printf("%3.2f 茶勺\n", cup * 8 * 2 * 3);
}
