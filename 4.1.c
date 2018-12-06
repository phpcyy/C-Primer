#include<stdio.h>
int main(void)
{
    char name[30];
    char lastName[30];
    printf("请输入您的名字\n");
    scanf("%s", name);

    printf("请输入您的姓氏\n");
    scanf("%s", lastName);

    printf("%s,%s", name, lastName);
}
